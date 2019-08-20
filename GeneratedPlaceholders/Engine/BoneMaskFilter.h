#pragma once

#include "CoreMinimal.h"
#include "BoneMaskFilter.generated.h"

UCLASS()
class UBoneMaskFilter : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInputBlendPose> BlendPoses;


};