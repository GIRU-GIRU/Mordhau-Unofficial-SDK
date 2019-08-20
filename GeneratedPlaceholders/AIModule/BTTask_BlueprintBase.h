#pragma once

#include "CoreMinimal.h"
#include "BTTask_BlueprintBase.generated.h"

UCLASS()
class UBTTask_BlueprintBase : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AAIController* AIOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ActorOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowPropertyDetails : 1;

	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
	void SetFinishOnMessageWithId(const struct FName& MessageName, int RequestID);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void SetFinishOnMessage(const struct FName& MessageName);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void ReceiveExecute(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void ReceiveAbort(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		bool IsTaskExecuting();
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		bool IsTaskAborting();
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void FinishExecute(bool bSuccess);
	UFUNCTION(BlueprintCallable, Category = "BTTask_BlueprintBase")
		void FinishAbort();

};