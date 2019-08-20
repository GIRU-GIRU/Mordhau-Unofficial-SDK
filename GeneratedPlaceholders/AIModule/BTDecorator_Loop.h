#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_Loop.generated.h"

UCLASS()
class UBTDecorator_Loop : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumLoops;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInfiniteLoop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InfiniteLoopTimeoutTime;


};