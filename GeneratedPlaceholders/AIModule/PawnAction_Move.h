#pragma once

#include "CoreMinimal.h"
#include "PawnAction_Move.generated.h"

UCLASS()
class UPawnAction_Move : public UPawnAction
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* GoalActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector GoalLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AcceptableRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* FilterClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowStrafe : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFinishOnOverlap : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsePathfinding : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowPartialPath : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProjectGoalToNavigation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUpdatePathToGoal : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbortChildActionOnPathChange : 1;


};