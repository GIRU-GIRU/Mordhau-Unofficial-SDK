#pragma once

#include "CoreMinimal.h"
#include "BTTask_RunBehaviorDynamic.generated.h"

UCLASS()
class UBTTask_RunBehaviorDynamic : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGameplayTag InjectionTag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBehaviorTree* DefaultBehaviorAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBehaviorTree* BehaviorAsset;


};