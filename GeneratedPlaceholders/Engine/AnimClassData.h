#pragma once

#include "CoreMinimal.h"
#include "AnimClassData.generated.h"

UCLASS()
class UAnimClassData : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBakedAnimationStateMachine> BakedStateMachines;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* TargetSkeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimNotifyEvent> AnimNotifies;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RootAnimNodeIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> OrderedSavedPoseIndices;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStructProperty* RootAnimNodeProperty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UStructProperty*> AnimNodeProperties;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> SyncGroupNames;


};