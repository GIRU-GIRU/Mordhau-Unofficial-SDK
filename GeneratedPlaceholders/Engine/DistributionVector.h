#pragma once

#include "CoreMinimal.h"
#include "DistributionVector.generated.h"

UCLASS()
class UDistributionVector : public UDistribution
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanBeBaked : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsDirty : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBakedDataSuccesfully : 1;


};