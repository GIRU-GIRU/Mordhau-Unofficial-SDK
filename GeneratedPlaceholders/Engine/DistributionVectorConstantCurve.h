#pragma once

#include "CoreMinimal.h"
#include "DistributionVectorConstantCurve.generated.h"

UCLASS()
class UDistributionVectorConstantCurve : public UDistributionVector
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInterpCurveVector ConstantCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockAxes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;


};