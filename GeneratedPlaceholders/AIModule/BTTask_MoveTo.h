#pragma once

#include "CoreMinimal.h"
#include "BTTask_MoveTo.generated.h"

UCLASS()
class UBTTask_MoveTo : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AcceptableRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* FilterClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ObservedBlackboardValueTolerance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bObserveBlackboardValue : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowStrafe : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowPartialPath : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTrackMovingGoal : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProjectGoalLocation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReachTestIncludesAgentRadius : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReachTestIncludesGoalRadius : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStopOnOverlap : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStopOnOverlapNeedsUpdate : 1;


};