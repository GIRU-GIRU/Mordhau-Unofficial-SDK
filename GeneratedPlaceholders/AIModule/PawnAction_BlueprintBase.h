#pragma once

#include "CoreMinimal.h"
#include "PawnAction_BlueprintBase.generated.h"

UCLASS()
class UPawnAction_BlueprintBase : public UPawnAction
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PawnAction_BlueprintBase")
	void ActionTick(class APawn* ControlledPawn, float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "PawnAction_BlueprintBase")
		void ActionStart(class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "PawnAction_BlueprintBase")
		void ActionResume(class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "PawnAction_BlueprintBase")
		void ActionPause(class APawn* ControlledPawn);
	UFUNCTION(BlueprintCallable, Category = "PawnAction_BlueprintBase")
		void ActionFinished(class APawn* ControlledPawn, TEnumAsByte<EPawnActionResult> WithResult);

};