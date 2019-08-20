#pragma once

#include "CoreMinimal.h"
#include "AITask_RunEQS.generated.h"

UCLASS()
class UAITask_RunEQS : public UAITask
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AITask_RunEQS")
	class UAITask_RunEQS* STATIC_RunEQS(class AAIController* Controller, class UEnvQuery* QueryTemplate);

};