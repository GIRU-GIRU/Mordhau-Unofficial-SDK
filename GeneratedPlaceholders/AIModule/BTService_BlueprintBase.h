#pragma once

#include "CoreMinimal.h"
#include "BTService_BlueprintBase.generated.h"

UCLASS()
class UBTService_BlueprintBase : public UBTService
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AAIController* AIOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ActorOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowPropertyDetails : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowEventDetails : 1;

	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		void ReceiveSearchStartAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		void ReceiveSearchStart(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		void ReceiveDeactivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		void ReceiveDeactivation(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		void ReceiveActivationAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		void ReceiveActivation(class AActor* OwnerActor);
	UFUNCTION(BlueprintCallable, Category = "BTService_BlueprintBase")
		bool IsServiceActive();

};