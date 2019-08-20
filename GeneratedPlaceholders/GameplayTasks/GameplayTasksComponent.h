#pragma once

#include "CoreMinimal.h"
#include "GameplayTasksComponent.generated.h"

UCLASS()
class UGameplayTasksComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsNetDirty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UGameplayTask*> SimulatedTasks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UGameplayTask*> TaskPriorityQueue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UGameplayTask*> TickingTasks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UGameplayTask*> KnownTasks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnClaimedResourcesChange;

	UFUNCTION(BlueprintCallable, Category = "GameplayTasksComponent")
	void OnRep_SimulatedTasks();
	UFUNCTION(BlueprintCallable, Category = "GameplayTasksComponent")
		EGameplayTaskRunResult STATIC_K2_RunGameplayTask(const TScriptInterface<class UGameplayTaskOwnerInterface>& TaskOwner, class UGameplayTask* Task, unsigned char Priority, TArray<class UClass*> AdditionalRequiredResources, TArray<class UClass*> AdditionalClaimedResources);

};