#pragma once

#include "CoreMinimal.h"
#include "BlendSpaceBase.generated.h"

UCLASS()
class UBlendSpaceBase : public UAnimationAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRotationBlendInMeshSpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpolationParameter InterpolationParam[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TargetWeightInterpolationSpeedPerSec;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseConstantInterpolation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENotifyTriggerMode> NotifyTriggerMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPerBoneInterpolation> PerBoneBlend;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SampleIndexWithMarkers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBlendSample> SampleData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEditorElement> GridSamples;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlendParameter BlendParameters[0x3];


};