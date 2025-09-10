// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Common/Type.h"
#include "GameFramework/GameModeBase.h"
#include "TheFutureCityGM.generated.h"

/**
 * 
 */
UCLASS()
class STAGEDEMO_API ATheFutureCityGM : public AGameModeBase
{
	GENERATED_BODY()

public:
	ATheFutureCityGM();
	//首先要初始化一个车辆配置，后续要写在config里面
	
	static FCarInfo GlobalCarInfo;
};
