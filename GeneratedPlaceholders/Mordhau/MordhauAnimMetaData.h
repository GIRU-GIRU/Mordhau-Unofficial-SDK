#pragma once

#include "CoreMinimal.h"
#include "MordhauAnimMetaData.generated.h"

UCLASS()
class UMordhauAnimMetaData : public UAnimMetaData
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OverrideIdleChangeBlendTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablesSpineBending;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ForceCinematicCameraWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablesOffhandIK;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForcesOffhandIK;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverridesOffhandIKChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffhandIKChangeSpeedOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxOffhandIKDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinOffhandIKDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablesSpineArmsCompensation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParamA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParamB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParamC;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParamD;


};