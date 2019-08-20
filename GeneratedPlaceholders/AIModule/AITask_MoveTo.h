#pragma once

#include "CoreMinimal.h"
#include "AITask_MoveTo.generated.h"

UCLASS()
class UAITask_MoveTo : public UAITask
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnRequestFailed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMoveFinished;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIMoveRequest MoveRequest;

	UFUNCTION(BlueprintCallable, Category = "AITask_MoveTo")
	class UAITask_MoveTo* STATIC_AIMoveTo(class AAIController* Controller, const struct FVector& GoalLocation, class AActor* GoalActor, float AcceptanceRadius, TEnumAsByte<EAIOptionFlag> StopOnOverlap, TEnumAsByte<EAIOptionFlag> AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking);

};