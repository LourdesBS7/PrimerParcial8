// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Potenciador.generated.h"

class UStaticMeshComponent;

UCLASS(Abstract)
class PVZ_USFX_LAB02_API APotenciador : public AActor
{
	GENERATED_BODY()
public:	
	// Sets default values for this actor's properties
	APotenciador();

	uint32 TipoPotenciador;

	UStaticMeshComponent* PotenciadorMeshComponent;
	void ActivarPotenciador() PURE_VIRTUAL( APotenciador::ActivarPotenciador, );
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
