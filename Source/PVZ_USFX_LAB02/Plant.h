// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Zombie.h"
#include "Plant.generated.h"


class UStaticMeshComponent;

UCLASS()
class PVZ_USFX_LAB02_API APlant : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APlant();

	UPROPERTY(EditAnywhere)
		class UStaticMeshComponent* PlantMeshComponent;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	//*************************************************

	void MostrarDisparosCada10Segundos();
	void RegistrarDisparo(APlant* PlantaQueDispara, AZombie* ZombieObjetivo);

	//**************************************************

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void FireShot(FVector FireDirection);
	//void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);

	/** Offset from the ships location to spawn projectiles */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		FVector GunOffset;
	/* How fast the weapon will fire */
	UPROPERTY(Category = Gameplay, EditAnywhere, BlueprintReadWrite)
		float FireRate;

	void ShotTimerExpired();
	
	float TiempoTranscurrido;
	float TiempoEntreDisparos;
	float TakeDamage(float Damage, FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser);
	float Health = 20.0f;
	//float FTimerHandle;

	//****************
	TMap<APlant*, TArray<AZombie*>> DisparosDePlantasAMapaDeZombies;


private:
	/* Flag to control firing  */
	uint32 bCanFire : 1;

	/** Handle for efficient management of ShotTimerExpired timer */
	FTimerHandle TimerHandle_ShotTimerExpired;

};
