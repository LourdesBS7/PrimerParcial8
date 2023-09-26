// Copyright Epic Games, Inc. All Rights Reserved.

#include "PVZ_USFX_LAB02GameMode.h"
#include "PVZ_USFX_LAB02Pawn.h"
#include "Zombie.h"
#include "Plant.h"
#include "Potenciador.h"
#include "MegaSol.h"
#include "TimerManager.h"
#include "ZombieComun.h"
#include "ZombieCono.h"
#include "ZombieCubo.h"
#include "ZombieSenal.h"

APVZ_USFX_LAB02GameMode::APVZ_USFX_LAB02GameMode()
{
	// set default pawn class to our character class
	PrimaryActorTick.bCanEverTick = true;
	DefaultPawnClass = APVZ_USFX_LAB02Pawn::StaticClass();

	MapPotenciadores.Add(TEXT("Sol"), 0);
	MapPotenciadores.Add(TEXT("Abono"), 1);
	MapPotenciadores.Add(TEXT("Agua"), 2);
	MapPotenciadores.Add(TEXT("Pala"), 0);

	//GetWorldTimerManager().SetTimer(TimerHandlePotenciadoresAgua, this, &APVZ_USFX_LAB02GameMode::TimerCallBackPotenciadoresAgua, IncrementarAguaCada, false);
	// En una función de tu clase que hereda de AActor o UObject
	//GetWorldTimerManager().SetTimer(TimerHandleTarjetasPlantaNuez, this, &APVZ_USFX_LAB02GameMode::TimerCallBackTarjetasPlantaNuez, 15.0f, false);

	MapTarjetasPlantas.Add(TEXT("Lanzaguisantes"), 0);
	MapTarjetasPlantas.Add(TEXT("Girasol"), 10);
	MapTarjetasPlantas.Add(TEXT("Nuez"), 10);
	MapTarjetasPlantas.Add(TEXT("Papa"), 0);
	MapTarjetasPlantas.Add(TEXT("Hongo"), 1);
	MapTarjetasPlantas.Add(TEXT("Repetidora"), 10);
	MapTarjetasPlantas.Add(TEXT("PlantaCarnivora"), 10);
	MapTarjetasPlantas.Add(TEXT("Lanzamaiz"), 10);
	MapTarjetasPlantas.Add(TEXT("Patatapulta"), 10);

	TPair<FString, uint32> TarjetaPlanta;
	TarjetaPlanta.Key = TEXT("LanzaChiles");
	TarjetaPlanta.Value = 5;

	MapTarjetasPlantas.Add(TarjetaPlanta);

}


void APVZ_USFX_LAB02GameMode::BeginPlay()
{
	Super::BeginPlay();

	FTransform SpawnLocation;
	SpawnLocation.SetLocation(FVector(-1500.0f, 1200.0f, 200.0f));
	float initialPositionX = -1500.0f;
	float initialPositionY = 1200.0f;

	for (int32 i = 0; i < NumberZombiesComun; ++i)
	{
		AZombieComun* NewZombieComun = SpawnZombieComun(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

		if (NewZombieComun)
		{
			NewZombieComun->SetSpawnAfter(FMath::RandRange(1, 10));
			NewZombieComun->SetActorHiddenInGame(true);
			NewZombieComun->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
			NewZombieComun->SetCanMove(false);
			ArrayZombies.Add(NewZombieComun);
		}
	}

	initialPositionX = -1500.0f;
	initialPositionY = 1200.0f;

	for (int32 i = 0; i < NumberZombiesCono; ++i)
	{
		AZombieCono* NewZombieCono = SpawnZombieCono(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

		if (NewZombieCono)
		{
			NewZombieCono->SetSpawnAfter(FMath::RandRange(1, 10));
			NewZombieCono->SetActorHiddenInGame(true);
			NewZombieCono->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
			NewZombieCono->SetCanMove(false);
			ArrayZombies.Add(NewZombieCono);
		}
	}

	initialPositionX = -1500.0f;
	initialPositionY = 1200.0f;

	for (int32 i = 0; i < NumberZombiesCubo; ++i)
	{
		AZombieCubo* NewZombieCubo = SpawnZombieCubo(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

		if (NewZombieCubo)
		{
			NewZombieCubo->SetSpawnAfter(FMath::RandRange(1, 10));
			NewZombieCubo->SetActorHiddenInGame(true);
			NewZombieCubo->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
			NewZombieCubo->SetCanMove(false);
			ArrayZombies.Add(NewZombieCubo);
		}
	}

	initialPositionX = -1500.0f;
	initialPositionY = 1200.0f;

	for (int32 i = 0; i < NumberZombiesSenal; ++i)
	{
		AZombieSenal* NewZombieSenal = SpawnZombieSenal(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));

		if (NewZombieSenal)
		{
			NewZombieSenal->SetSpawnAfter(FMath::RandRange(1, 10));
			NewZombieSenal->SetActorHiddenInGame(true);
			NewZombieSenal->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
			NewZombieSenal->SetCanMove(false);
			ArrayZombies.Add(NewZombieSenal);
		}
	}




	initialPositionX = -1500.0f;
	initialPositionY = 100.0f;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 2; j++) {
			APlant* NewPlant = SpawnPlant(FVector(initialPositionX + i * 150.0f, initialPositionY + j * 350.0f, 200.0f));
			//NewPlant->SetActorEnableCollision(true);
			ArrayPlants.Add(NewPlant);
		}
	} 

	//initialPositionX = -1500.0f;
	//initialPositionY = 1000.0f;
	//for (int i = 0; i < 5; i++)
	//{
	//	AZombie* NewZombie = SpawnZombie(FVector(initialPositionX + i * 150.0f, initialPositionY, 200.0f));
	//	//NewZombie->SetActorEnableCollision(true);
	//	NewZombie->SetCanMove(true);
	//}

	/*AMegaSol* NewMegasol1 = GetWorld()->SpawnActor<AMegaSol>(FVector(0.0f, 0.0f, 200.0f), FRotator(0.0f, 0.0f, 0.0f));
	MapPotenciadores.Add(NewMegasol1, 1);*/
	MapPotenciadores.Add(TEXT("Megasol"), 1);
	MapPotenciadores.Add(TEXT("AbonoMagico"), 3);
	MapPotenciadores.Add(TEXT("Regadera"), 0);
	MapPotenciadores.Add(TEXT("Pala"), 5);

	UWorld* const World = GetWorld();
	if (World != nullptr)
	{
		// spawn the projectile
		World->GetTimerManager().SetTimer(TimerHandleTarjetasPlantaNuez, this, &APVZ_USFX_LAB02GameMode::TimerCallBackTarjetasPlantaNuez, 15.0f);

	}

}

void APVZ_USFX_LAB02GameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//VisualizarTarjetasPlantas();

	if (TiempoTrancurridoSiguienteTarjetaLanzaguisantes > 5.0f)
	{
		MapTarjetasPlantas["Lanzaguisantes"] += 1;
		TiempoTrancurridoSiguienteTarjetaLanzaguisantes = 0.0f;
	}

	if (TiempoTrancurridoSiguienteTarjetaGirasol > 10.0f)
	{
		MapTarjetasPlantas["Girasol"] += 1;
		TiempoTrancurridoSiguienteTarjetaGirasol = 0.0f;
	}

	TiempoTrancurridoSiguienteTarjetaLanzaguisantes += DeltaTime;
	TiempoTrancurridoSiguienteTarjetaGirasol += DeltaTime;

	TiempoTranscurrido += DeltaTime;
	TiempoTranscurridoSiguientePala += DeltaTime;
	TiempoTranscurridoSiguienteAbono += DeltaTime;

	if (TiempoTranscurridoSiguienteAbono >= 10.0f)
	{
		MapPotenciadores[TEXT("Abono")] += 1;
		TiempoTranscurridoSiguienteAbono = 0.0f;
		//VisualizarPotenciadores();
	}


	if (TiempoTranscurridoSiguientePala >= 10.0f)
	{
		MapPotenciadores[TEXT("Pala")] += 1;
		TiempoTranscurridoSiguientePala = 0.0f;
		//VisualizarPotenciadores();
	}

//	if (ArrayZombies.Num() > 0) {

		for (AZombie* ActualZombie : ArrayZombies)
		{
			//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("SpawnAfter: %f"), ActualZombie->GetSpawnAfter()));

			if (ActualZombie && ActualZombie->SpawnAfter <= 0)
			{
				ActualZombie->SetActorScale3D(FVector(1.0f, 1.0f, 1.0f));      // Establece la escala de spawn deseada
				ActualZombie->SetActorHiddenInGame(false);      // Haz que el actor sea visible
				ActualZombie->SetActorEnableCollision(true);     // Habilita las colisiones si es necesario
				ActualZombie->SetCanMove(true);     // Habilita las colisiones si es necesario
				NumberZombiesSpawned += 1;

				ArrayZombies.Remove(ActualZombie);


				for (TPair<FString, uint32> ElementoActual : MapPotenciadores)
				{
					FString Llave = ElementoActual.Key;
					int32 Valor = ElementoActual.Value;
					//UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);

					//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Elemento: %s, Cantidad: %d"), *ElementoActual.Key, ElementoActual.Value));
				}

			}
			else
			{
				ActualZombie->SpawnAfter -= DeltaTime;
			}
		}
		/* }
	else {
		VisualizarPotenciadores();
	}*/
}


void APVZ_USFX_LAB02GameMode::VisualizarPotenciadores() {
	for (TPair<FString, uint32> ElementoActual : MapPotenciadores)
	{
		FString Llave = ElementoActual.Key;
		int32 Valor = ElementoActual.Value;
		UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Elemento: %s, Cantidad: %d"), *Llave, Valor));
	}
}

void APVZ_USFX_LAB02GameMode::VisualizarTarjetasPlantas() {
	for (TPair<FString, uint32> TarjetaActual : MapTarjetasPlantas)
	{
		FString Llave = TarjetaActual.Key;
		int32 Valor = TarjetaActual.Value;
		UE_LOG(LogTemp, Warning, TEXT("Llave: %s, Valor: %d"), *Llave, Valor);

		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, FString::Printf(TEXT("Planta: %s, tiempo recarga: %d"), *Llave, Valor));
	}
}


//AZombie* APVZ_USFX_LAB02GameMode::SpawnZombie(FVector _spawnPosition)
//{
//	FTransform SpawnLocation;
//	SpawnLocation.SetLocation(_spawnPosition);
//	return GetWorld()->SpawnActor<AZombie>(AZombie::StaticClass(), SpawnLocation);
//}

AZombieComun* APVZ_USFX_LAB02GameMode::SpawnZombieComun(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<AZombieComun>(AZombieComun::StaticClass(), SpawnLocation);
}

AZombieCono* APVZ_USFX_LAB02GameMode::SpawnZombieCono(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<AZombieCono>(AZombieCono::StaticClass(), SpawnLocation);
}

AZombieCubo* APVZ_USFX_LAB02GameMode::SpawnZombieCubo(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<AZombieCubo>(AZombieCubo::StaticClass(), SpawnLocation);
}

AZombieSenal* APVZ_USFX_LAB02GameMode::SpawnZombieSenal(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<AZombieSenal>(AZombieSenal::StaticClass(), SpawnLocation);
}

APlant* APVZ_USFX_LAB02GameMode::SpawnPlant(FVector _spawnPosition)
{
	FTransform SpawnLocation;
	SpawnLocation.SetLocation(_spawnPosition);
	return GetWorld()->SpawnActor<APlant>(APlant::StaticClass(), SpawnLocation);
}

void APVZ_USFX_LAB02GameMode::TimerCallBackPotenciadoresAgua()
{
	MapPotenciadores[TEXT("Agua")] += 1;
}

void APVZ_USFX_LAB02GameMode::TimerCallBackTarjetasPlantaNuez()
{
	MapTarjetasPlantas[TEXT("Nuez")] += 1;
}
