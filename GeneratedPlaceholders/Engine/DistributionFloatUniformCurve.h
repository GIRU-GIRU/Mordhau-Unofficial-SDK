#pragma once

#include "CoreMinimal.h"
#include "DistributionFloatUniformCurve.generated.h"

UCLASS()
class UDistributionFloatUniformCurve : public UDistributionFloat
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector2D ConstantCurve;


};