#pragma once

#include "CoreMinimal.h"
#include "GameplayTask_TimeLimitedExecution.generated.h"

UCLASS()
class UGameplayTask_TimeLimitedExecution : public UGameplayTask
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnFinished;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTimeExpired;


};