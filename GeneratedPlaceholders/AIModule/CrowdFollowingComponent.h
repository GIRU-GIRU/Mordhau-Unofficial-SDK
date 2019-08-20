#pragma once

#include "CoreMinimal.h"
#include "CrowdFollowingComponent.generated.h"

UCLASS()
class UCrowdFollowingComponent : public UPathFollowingComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CrowdAgentMoveDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCharacterMovementComponent* CharacterMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask AvoidanceGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask GroupsToAvoid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask GroupsToIgnore;

	UFUNCTION(BlueprintCallable, Category = "CrowdFollowingComponent")
	void SuspendCrowdSteering(bool bSuspend);

};