#pragma once

#include "CoreMinimal.h"
#include "PoseAsset.generated.h"

UCLASS()
class UPoseAsset : public UAnimationAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPoseDataContainer PoseContainer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAdditivePose;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BasePoseIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName RetargetSource;


};