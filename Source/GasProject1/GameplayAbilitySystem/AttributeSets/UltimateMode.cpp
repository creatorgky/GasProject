// Fill out your copyright notice in the Description page of Project Settings.


#include "UltimateMode.h"
#include "Net/UnrealNetwork.h"

UUltimateMode::UUltimateMode()
{
	EarthMode = 0.f;
	FireMode = 0.f;
	WaterMode = 0.f;
	AirMode = 0.f;
}

void UUltimateMode::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME_CONDITION_NOTIFY(UUltimateMode,EarthMode,COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUltimateMode,FireMode,COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUltimateMode,WaterMode,COND_None, REPNOTIFY_Always);
	DOREPLIFETIME_CONDITION_NOTIFY(UUltimateMode,AirMode,COND_None, REPNOTIFY_Always);
}