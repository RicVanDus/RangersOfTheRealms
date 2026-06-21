// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InputModifiers.h"
#include "PS5AxisFix.generated.h"

/**
 * 
 */
UCLASS()
class FIFIABLO_API UPS5AxisFix : public UInputModifier
{
	GENERATED_BODY()

public:
    virtual FInputActionValue ModifyRaw_Implementation(
        const UEnhancedPlayerInput* PlayerInput,
        FInputActionValue CurrentValue,
        float DeltaTime) override;
};