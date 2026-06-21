// Fill out your copyright notice in the Description page of Project Settings.


#include "PS5AxisFix.h"

FInputActionValue UPS5AxisFix::ModifyRaw_Implementation(
    const UEnhancedPlayerInput* PlayerInput,
    FInputActionValue CurrentValue,
    float DeltaTime)
{
    float Value = CurrentValue.Get<float>();

    // Convert 0..1 → -1..1
    Value = (Value * 2.0f) - 1.0f;

    return FInputActionValue(Value);
}