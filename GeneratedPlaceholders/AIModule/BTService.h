#pragma once

#include "CoreMinimal.h"
#include "BTService.generated.h"

UCLASS()
class UBTService : public UBTAuxiliaryNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Interval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomDeviation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCallTickOnSearchStart : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRestartTimerOnEachActivation : 1;


};