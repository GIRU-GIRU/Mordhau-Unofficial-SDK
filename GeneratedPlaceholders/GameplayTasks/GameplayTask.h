#pragma once

#include "CoreMinimal.h"
#include "GameplayTask.generated.h"

UCLASS()
class UGameplayTask : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName InstanceName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ETaskResourceOverlapPolicy ResourceOverlapPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameplayTask* ChildTask;

	UFUNCTION(BlueprintCallable, Category = "GameplayTask")
	void ReadyForActivation();
	UFUNCTION(BlueprintCallable, Category = "GameplayTask")
		void GenericGameplayTaskDelegate__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "GameplayTask")
		void EndTask();

};