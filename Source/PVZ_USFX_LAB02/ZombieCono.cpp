// Fill out your copyright notice in the Description page of Project Settings.


#include "ZombieCono.h"

AZombieCono::AZombieCono()
{
	static ConstructorHelpers::FObjectFinder<UStaticMesh> ZombieMesh(TEXT("StaticMesh'/Game/StarterContent/Shapes/Shape_Cone.Shape_Cone'"));
	ZombieMeshComponent->SetStaticMesh(ZombieMesh.Object);

}
