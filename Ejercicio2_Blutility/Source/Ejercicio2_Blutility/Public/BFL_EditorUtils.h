// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "BFL_EditorUtils.generated.h"

/**
 * 
 */
UCLASS()
class EJERCICIO2_BLUTILITY_API UBFL_EditorUtils : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintPure, Category = "Utils")
	static UWorld* GetWorldContextObject();
};
