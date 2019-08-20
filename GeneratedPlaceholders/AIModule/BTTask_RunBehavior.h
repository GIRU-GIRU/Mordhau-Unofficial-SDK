#pragma once

#include "CoreMinimal.h"
#include "BTTask_RunBehavior.generated.h"

UCLASS()
class UBTTask_RunBehavior : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBehaviorTree* BehaviorAsset;


};