#pragma once

#include "CoreMinimal.h"
#include "AITask.generated.h"

UCLASS()
class UAITask : public UGameplayTask
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AAIController* OwnerController;


};