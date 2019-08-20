#pragma once

#include "CoreMinimal.h"
#include "DistributionVectorConstant.generated.h"

UCLASS()
class UDistributionVectorConstant : public UDistributionVector
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Constant;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockAxes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDistributionVectorLockFlags> LockedAxes;


};