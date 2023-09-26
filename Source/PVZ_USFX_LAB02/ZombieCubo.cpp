// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCubo.h"

AZombieCubo::AZombieCubo()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);

}
