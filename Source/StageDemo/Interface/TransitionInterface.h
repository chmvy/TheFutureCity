// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "StageDemo/Common/Type.h"
#include "UObject/Interface.h"
#include "TransitionInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(BlueprintType)
class UTransitionInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class STAGEDEMO_API ITransitionInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	void Transition2Target(ECameraView TargetView,FVector TargetPosition);
	virtual void Transition2Target_Implementation(ECameraView TargetView,FVector TargetPosition)
	{
		UE_LOG(LogTemp, Display, TEXT("Transition2Parking"));
	}
};
