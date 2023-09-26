// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ActorJerarquico.generated.h"

UCLASS()
class PVZ_USFX_LAB02_API AActorJerarquico : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorJerarquico();

	UPROPERTY()
		class USceneComponent* Root;
	UPROPERTY()
		class USceneComponent* ChildSceneComponent;
	UPROPERTY()
		class UStaticMeshComponent* BoxOne;
	UPROPERTY()
		class UStaticMeshComponent* BoxTwo;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
