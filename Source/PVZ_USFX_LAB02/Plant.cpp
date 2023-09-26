// Fill out your copyright notice in the Description page of Project Settings.


#include "Plant.h"
#include "PVZ_USFX_LAB02Projectile.h"
#include "Zombie.h"

// Sets default values
APlant::APlant()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Registra la función para la detección de colisiones
	//OnActorBeginOverlap.AddDynamic(this, &APlant::OnOverlapBegin);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> PlantMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cylinder.Shape_Cylinder'"));

	PlantMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PlantMesh"));
	PlantMeshComponent->SetStaticMesh(PlantMesh.Object);
	//PlantMeshComponent->SetCollisionProfileName(TEXT("Ignore"));
	PlantMeshComponent->SetCollisionProfileName(UCollisionProfile::BlockAll_ProfileName);
	PlantMeshComponent->SetSimulatePhysics(false);
	PlantMeshComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
	RootComponent = PlantMeshComponent;

	bCanFire = true;
	GunOffset = FVector(90.f, 0.f, 0.f);
	FireRate = 0.2f;
	TiempoTranscurrido = 0.0f;
	TiempoEntreDisparos = 1.0f;
	Tags.Add(TEXT("Plant"));
}

//void APlant::OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor)
//{
//	// Verifica si el otro actor es un zombie
//	AZombie* ActualZombie = Cast<AZombie>(OtherActor);
//
//	if (ActualZombie)
//	{
//		TakeDamage(ActualZombie->DamageGenerates, FDamageEvent(), nullptr, this);
//
//		// Reduce la energía de la planta cuando un zombie está cerca
//		// Puedes implementar tu propia lógica para reducir la energía aquí
//		// Por ejemplo, disminuir una variable que represente la energía de la planta
//		// También puedes programar el tiempo entre las reducciones de energía
//	}
//}



// Called when the game starts or when spawned
void APlant::BeginPlay()
{
	Super::BeginPlay();

	//*********************************
	
	// Configura un temporizador para llamar a la función cada 10 segundos
	FTimerHandle TimerHandle;
	GetWorldTimerManager().SetTimer(TimerHandle, this, &APlant::MostrarDisparosCada10Segundos, 10.0f, true);

	//TimerHandle = FTimerHandle;


	
}

// Called every frame
void APlant::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (Health <= 0)
	{
		Destroy();
	}

	TiempoTranscurrido += DeltaTime;
	if (TiempoTranscurrido >= TiempoEntreDisparos){

		FireShot(FVector(0.0f, 1.0f, 0.0f));
		TiempoTranscurrido = 0.0f;
	}
	
}

//*****************Implementé las funciones de registrar disparo
void APlant::RegistrarDisparo(APlant* PlantaQueDispara, AZombie* ZombieObjetivo)
{
	if (DisparosDePlantasAMapaDeZombies.Contains(PlantaQueDispara))
	{
		// La planta ya está en el mapa, agrega el zombie al array de disparos
		DisparosDePlantasAMapaDeZombies[PlantaQueDispara].Add(ZombieObjetivo);
	}
	else
	{
		// La planta no está en el mapa, crea una nueva entrada
		TArray<AZombie*> NuevosDisparos;
		NuevosDisparos.Add(ZombieObjetivo);
		DisparosDePlantasAMapaDeZombies.Add(PlantaQueDispara, NuevosDisparos);
	}
}

void APlant::MostrarDisparosCada10Segundos()
{
	for (const auto& Disparos : DisparosDePlantasAMapaDeZombies)
	{
		APlant* Plant = Disparos.Key;
		TArray<AZombie*> Zombies = Disparos.Value;

		// Aquí puedes procesar y mostrar la información de los disparos
		for (AZombie* Zombie : Zombies)
		{
			// Procesa y muestra los disparos como desees
		}
	}
}


//*************************


void APlant::FireShot(FVector FireDirection)
{
	// If it's ok to fire again
	if (bCanFire == true)
	{
		// If we are pressing fire stick in a direction
		if (FireDirection.SizeSquared() > 0.0f)
		{
			const FRotator FireRotation = FireDirection.Rotation();
			// Spawn projectile at an offset from this pawn
			const FVector SpawnLocation = GetActorLocation() + FireRotation.RotateVector(GunOffset);

			UWorld* const World = GetWorld();
			if (World != nullptr)
			{
				// spawn the projectile
				World->SpawnActor<APVZ_USFX_LAB02Projectile>(SpawnLocation, FireRotation);
			}

			bCanFire = false;
			World->GetTimerManager().SetTimer(TimerHandle_ShotTimerExpired, this, &APlant::ShotTimerExpired, FireRate);

			//// try and play the sound if specified
			//if (FireSound != nullptr)
			//{
			//	UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
			//}

			//bCanFire = false;
		}
	}
}

void APlant::ShotTimerExpired()
{
	bCanFire = true;
}

float APlant::TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
	// Aquí puedes manejar el daño como desees, por ejemplo, actualizando la salud del actor.
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));

	Health -= Damage;
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Health Zombie: %f"), this->Health));

	// Devuelve la cantidad de daño que se aplicó realmente.
	return Health;
}
