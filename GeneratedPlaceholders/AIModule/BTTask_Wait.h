#pragma once

#include "CoreMinimal.h"
#include "BTTask_Wait.generated.h"

UCLASS()
class UBTTask_Wait : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WaitTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomDeviation;


};