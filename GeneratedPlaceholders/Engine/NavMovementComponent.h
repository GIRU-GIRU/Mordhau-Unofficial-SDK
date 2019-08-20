#pragma once

#include "CoreMinimal.h"
#include "NavMovementComponent.generated.h"

UCLASS()
class UNavMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAgentProperties NavAgentProps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FixedPathBrakingDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUpdateNavAgentWithOwnersCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseAccelerationForPaths : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFixedBrakingDistanceForPaths : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* PathFollowingComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovementProperties MovementState;

	UFUNCTION(BlueprintCallable, Category = "NavMovementComponent")
	void StopMovementKeepPathing();
	UFUNCTION(BlueprintCallable, Category = "NavMovementComponent")
		void StopActiveMovement();
	UFUNCTION(BlueprintCallable, Category = "NavMovementComponent")
		bool IsSwimming();
	UFUNCTION(BlueprintCallable, Category = "NavMovementComponent")
		bool IsMovingOnGround();
	UFUNCTION(BlueprintCallable, Category = "NavMovementComponent")
		bool IsFlying();
	UFUNCTION(BlueprintCallable, Category = "NavMovementComponent")
		bool IsFalling();
	UFUNCTION(BlueprintCallable, Category = "NavMovementComponent")
		bool IsCrouching();

};