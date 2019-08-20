#pragma once

#include "CoreMinimal.h"
#include "BTTask_GameplayTaskBase.generated.h"

UCLASS()
class UBTTask_GameplayTaskBase : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWaitForGameplayTask : 1;


};