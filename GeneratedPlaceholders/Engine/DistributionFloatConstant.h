#pragma once

#include "CoreMinimal.h"
#include "DistributionFloatConstant.generated.h"

UCLASS()
class UDistributionFloatConstant : public UDistributionFloat
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Constant;


};