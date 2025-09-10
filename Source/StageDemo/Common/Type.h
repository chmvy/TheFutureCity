#pragma once
#include "CoreMinimal.h"
#include "Type.generated.h"



// 汽车全局配置
USTRUCT(BlueprintType)
struct FCarInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Common Info")
	bool bIsSuicideDoors;
};

// 车门索引
UENUM(BlueprintType)
enum class EDoorIndex : uint8
{
	EDOOR_NONE = 0			UMETA( DisplayName = "None" ),
	EDOOR_LeftFront = 1		UMETA( DisplayName = "左前门" ),
	EDOOR_RightFront = 2	UMETA( DisplayName = "右前门" ),
	EDOOR_LeftRear = 3		UMETA( DisplayName = "左后门" ),
	EDOOR_RightRear = 4		UMETA( DisplayName = "右后门" )
};


USTRUCT(BlueprintType)
struct FDoorInfo
{
	GENERATED_BODY()

	//门动画根
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorInfo")
	AActor* DoorRoot;

	//门序号
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorInfo")
	EDoorIndex DoorIndex;
	//门当前位置
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorInfo",  meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float CurrentTime;

	//动画目标位置 (0 关门，1 开门)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DoorInfo", meta = (ClampMin = "0.0", ClampMax = "1.0") )
	float TargetTime;
};


UENUM(BlueprintType)
enum class ECameraView : uint8
{
	ViewNone = 0			UMETA( DisplayName = "None" ),
	CityView				UMETA( DisplayName = "城市主场景视角" ),
	ParkingView				UMETA( DisplayName = "驻车视角" ),
	ChargeView				UMETA( DisplayName = "充电视角" ),
	GameView				UMETA( DisplayName = "游戏场景")
};

/*
 * 相机点位信息，这里采用在编辑器模式下，从场景中收集点位的方式
 */
USTRUCT(BlueprintType)
struct FCameraViewInfo
{
	GENERATED_BODY()
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Common")
	ECameraView CameraView;

	//收集到的点位信息这是一个变换值
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Common")
	FTransform Transform;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Common")
	float SpringArmLenght;

	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category="Common")
	float ViewField = 90;
	
};
