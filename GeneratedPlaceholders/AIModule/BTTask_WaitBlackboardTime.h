#pragma once

#include "CoreMinimal.h"
#include "BTTask_WaitBlackboardTime.generated.h"

UCLASS()
class UBTTask_WaitBlackboardTime : public UBTTask_Wait
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBlackboardKeySelector BlackboardKey;


};