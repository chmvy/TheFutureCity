// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Type.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TheFutureCityLib.generated.h"

/**
 * 
 */
UCLASS()
class STAGEDEMO_API UTheFutureCityLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	UFUNCTION(BlueprintCallable, BlueprintPure, meta = (WorldContext="WorldContextObject") )
	static const FCarInfo& GetCarInfo(const UObject* WorldContextObject);
};
