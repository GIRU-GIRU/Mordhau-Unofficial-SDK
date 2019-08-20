#pragma once

#include "CoreMinimal.h"
#include "BehaviorTreeComponent.generated.h"

UCLASS()
class UBehaviorTreeComponent : public UBrainComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBTNode*> NodeInstances;

	UFUNCTION(BlueprintCallable, Category = "BehaviorTreeComponent")
	void SetDynamicSubtree(const struct FGameplayTag& InjectTag, class UBehaviorTree* BehaviorAsset);
	UFUNCTION(BlueprintCallable, Category = "BehaviorTreeComponent")
		float GetTagCooldownEndTime(const struct FGameplayTag& CooldownTag);
	UFUNCTION(BlueprintCallable, Category = "BehaviorTreeComponent")
		void AddCooldownTagDuration(const struct FGameplayTag& CooldownTag, float CooldownDuration, bool bAddToExistingDuration);

};