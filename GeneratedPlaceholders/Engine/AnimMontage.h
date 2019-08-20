#pragma once

#include "CoreMinimal.h"
#include "AnimMontage.generated.h"

UCLASS()
class UAnimMontage : public UAnimCompositeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAlphaBlend BlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendInTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAlphaBlend BlendOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendOutTriggerTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SyncGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SyncSlotIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMarkerSyncData MarkerData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCompositeSection> CompositeSections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSlotAnimationTrack> SlotAnimTracks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBranchingPoint> BranchingPoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableRootMotionTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableRootMotionRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableAutoBlendOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERootMotionRootLock> RootMotionRootLock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBranchingPointMarker> BranchingPointMarkers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> BranchingPointStateNotifyIndices;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTimeStretchCurve TimeStretchCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName TimeStretchCurveName;


};