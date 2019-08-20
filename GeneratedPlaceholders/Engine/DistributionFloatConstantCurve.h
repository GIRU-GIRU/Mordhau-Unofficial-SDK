#pragma once

#include "CoreMinimal.h"
#include "DistributionFloatConstantCurve.generated.h"

UCLASS()
class UDistributionFloatConstantCurve : public UDistributionFloat
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveFloat ConstantCurve;


};