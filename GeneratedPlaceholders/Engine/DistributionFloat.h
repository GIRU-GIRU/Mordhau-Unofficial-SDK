#pragma once

#include "CoreMinimal.h"
#include "DistributionFloat.generated.h"

UCLASS()
class UDistributionFloat : public UDistribution
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanBeBaked : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBakedDataSuccesfully : 1;


};