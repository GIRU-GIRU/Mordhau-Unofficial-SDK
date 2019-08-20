#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_BlueprintBase.generated.h"

UCLASS()
class UBTDecorator_BlueprintBase : public UBTDecorator
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AAIController* AIOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ActorOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> ObservedKeyNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowPropertyDetails : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCheckConditionOnlyBlackBoardChanges : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsObservingBB : 1;

	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveObserverDeactivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveObserverDeactivated(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveObserverActivatedAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveObserverActivated(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveExecutionStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveExecutionStart(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveExecutionFinishAI(class AAIController* OwnerController, class APawn* ControlledPawn, TEnumAsByte<EBTNodeResult> NodeResult);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		void ReceiveExecutionFinish(class AActor* OwnerActor, TEnumAsByte<EBTNodeResult> NodeResult);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		bool PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		bool PerformConditionCheck(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		bool IsDecoratorObserverActive();
	UFUNCTION(BlueprintCallable, Category = "BTDecorator_BlueprintBase")
		bool IsDecoratorExecutionActive();

};