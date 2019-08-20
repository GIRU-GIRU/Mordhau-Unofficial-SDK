#pragma once

#include "CoreMinimal.h"
#include "BrainComponent.generated.h"

UCLASS()
class UBrainComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlackboardComponent* BlackboardComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AAIController* AIOwner;

	UFUNCTION(BlueprintCallable, Category = "BrainComponent")
	void StopLogic(const struct FString& Reason);
	UFUNCTION(BlueprintCallable, Category = "BrainComponent")
		void RestartLogic();
	UFUNCTION(BlueprintCallable, Category = "BrainComponent")
		bool IsRunning();
	UFUNCTION(BlueprintCallable, Category = "BrainComponent")
		bool IsPaused();

};