#pragma once

#include "CoreMinimal.h"
#include "ThudderComponent.generated.h"

UCLASS()
class UThudderComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnThud;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlyIfBoneIsSimulatingPhysics;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* MonitoredComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MonitoredBone;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinTimeBetweenThuds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThudMinVelocityThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NextThudTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PreviousVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentVelocity;

	UFUNCTION(BlueprintCallable, Category = "ThudderComponent")
	void DoTick();

};