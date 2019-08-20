#pragma once

#include "CoreMinimal.h"
#include "AnimBlueprintGeneratedClass.generated.h"

UCLASS()
class UAnimBlueprintGeneratedClass : public UBlueprintGeneratedClass
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
	TArray<struct FName> SyncGroupNames;


};