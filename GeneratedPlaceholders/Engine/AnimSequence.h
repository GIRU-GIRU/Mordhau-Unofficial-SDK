#pragma once

#include "CoreMinimal.h"
#include "AnimSequence.generated.h"

UCLASS()
class UAnimSequence : public UAnimSequenceBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumFrames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTrackToSkeletonMap> TrackToSkeletonMapTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAdditiveAnimationType> AdditiveAnimType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAdditiveBasePoseType> RefPoseType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RefPoseSeq;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RefFrameIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EncodingPkgVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName RetargetSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAnimInterpolationType Interpolation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableRootMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERootMotionRootLock> RootMotionRootLock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceRootLock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRootMotionSettingsCopiedFromMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimSyncMarker> AuthoredSyncMarkers;


};