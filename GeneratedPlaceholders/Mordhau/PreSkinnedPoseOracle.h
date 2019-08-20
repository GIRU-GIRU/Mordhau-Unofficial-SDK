#pragma once

#include "CoreMinimal.h"
#include "PreSkinnedPoseOracle.generated.h"

UCLASS()
class APreSkinnedPoseOracle : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<class USkeleton*, class USkeletalMeshComponent*> SkeletonToMeshComp;


};