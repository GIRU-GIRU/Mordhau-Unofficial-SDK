#pragma once

#include "CoreMinimal.h"
#include "PawnActionsComponent.generated.h"

UCLASS()
class UPawnActionsComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APawn* ControlledPawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPawnActionStack> ActionStacks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPawnActionEvent> ActionEvents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnAction* CurrentAction;

	UFUNCTION(BlueprintCallable, Category = "PawnActionsComponent")
	bool K2_PushAction(class UPawnAction* NewAction, TEnumAsByte<EAIRequestPriority> Priority, class UObject* Instigator);
	UFUNCTION(BlueprintCallable, Category = "PawnActionsComponent")
		bool STATIC_K2_PerformAction(class APawn* Pawn, class UPawnAction* Action, TEnumAsByte<EAIRequestPriority> Priority);
	UFUNCTION(BlueprintCallable, Category = "PawnActionsComponent")
		TEnumAsByte<EPawnActionAbortState> K2_ForceAbortAction(class UPawnAction* ActionToAbort);
	UFUNCTION(BlueprintCallable, Category = "PawnActionsComponent")
		TEnumAsByte<EPawnActionAbortState> K2_AbortAction(class UPawnAction* ActionToAbort);

};