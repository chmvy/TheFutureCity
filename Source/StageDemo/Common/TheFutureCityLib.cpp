// Fill out your copyright notice in the Description page of Project Settings.


#include "TheFutureCityLib.h"

#include "StageDemo/TheFutureCityGM.h"


const FCarInfo& UTheFutureCityLib::GetCarInfo(const UObject* WorldContextObject)
{
	return ATheFutureCityGM::GlobalCarInfo;
}
