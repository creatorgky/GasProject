// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AbilitySystemComponent.h"
#include "UltimateMode.generated.h"

/**
 * 
 */
UCLASS()
class GASPROJECT1_API UUltimateMode : public UAttributeSet
{
	GENERATED_BODY()

public:
	UUltimateMode();

	//Ultimate Mode Attributes
	UPROPERTY(BlueprintReadOnly,Category="Attributes", ReplicatedUsing=OnRep_EarthMode)
	FGameplayAttributeData EarthMode;
	ATTRIBUTE_ACCESSORS_BASIC(UUltimateMode,EarthMode);

	UPROPERTY(BlueprintReadOnly,Category="Attributes", ReplicatedUsing=OnRep_FireMode)
	FGameplayAttributeData FireMode;
	ATTRIBUTE_ACCESSORS_BASIC(UUltimateMode,FireMode);

	UPROPERTY(BlueprintReadOnly,Category="Attributes", ReplicatedUsing=OnRep_WaterMode)
	FGameplayAttributeData WaterMode;
	ATTRIBUTE_ACCESSORS_BASIC(UUltimateMode,WaterMode);

	UPROPERTY(BlueprintReadOnly,Category="Attributes", ReplicatedUsing=OnRep_AirMode)
	FGameplayAttributeData AirMode;
	ATTRIBUTE_ACCESSORS_BASIC(UUltimateMode,AirMode);

public:
	UFUNCTION()
	void OnRep_EarthMode(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UUltimateMode,EarthMode,OldValue);
	}

	UFUNCTION()
	void OnRep_FireMode(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UUltimateMode,FireMode,OldValue);
	}

	UFUNCTION()
	void OnRep_WaterMode(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UUltimateMode,WaterMode,OldValue);
	}

	UFUNCTION()
	void OnRep_AirMode(const FGameplayAttributeData& OldValue) const
	{
		GAMEPLAYATTRIBUTE_REPNOTIFY(UUltimateMode,AirMode,OldValue);
	}

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
};
