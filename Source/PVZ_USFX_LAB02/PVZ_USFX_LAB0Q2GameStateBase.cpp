// Fill out your copyright notice in the Description page of Project Settings.


#include "PVZ_USFX_LAB0Q2GameStateBase.h"

APVZ_USFX_LAB0Q2GameStateBase::APVZ_USFX_LAB0Q2GameStateBase()
{
	CurrentScore = 0;
}

void APVZ_USFX_LAB0Q2GameStateBase::SetScore(int32 NewScore)
{
	CurrentScore = NewScore;
}

int32 APVZ_USFX_LAB0Q2GameStateBase::GetScore()
{
	return CurrentScore;
}
