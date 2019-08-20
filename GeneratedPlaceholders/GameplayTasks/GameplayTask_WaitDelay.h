#pragma once

#include "CoreMinimal.h"
#include "GameplayTask_WaitDelay.generated.h"

UCLASS()
class UGameplayTask_WaitDelay : public UGameplayTask
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnFinish;

	UFUNCTION(BlueprintCallable, Category = "GameplayTask_WaitDelay")
	class UGameplayTask_WaitDelay* STATIC_TaskWaitDelay(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, float Time, unsigned char Priority);
	UFUNCTION(BlueprintCallable, Category = "GameplayTask_WaitDelay")
		void TaskDelayDelegate__DelegateSignature();

};