#pragma once

#include "CoreMinimal.h"
#include "SkeletalBodySetup.generated.h"

UCLASS()
class USkeletalBodySetup : public UBodySetup
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSkipScaleFromAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPhysicalAnimationProfile> PhysicalAnimationData;


};