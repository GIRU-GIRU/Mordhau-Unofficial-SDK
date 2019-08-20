#pragma once

#include "CoreMinimal.h"
#include "DistributionFloatUniform.generated.h"

UCLASS()
class UDistributionFloatUniform : public UDistributionFloat
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Min;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Max;


};