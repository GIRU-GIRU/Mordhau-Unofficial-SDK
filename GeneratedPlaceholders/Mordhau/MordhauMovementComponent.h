#pragma once

#include "CoreMinimal.h"
#include "MordhauMovementComponent.generated.h"

UCLASS()
class UMordhauMovementComponent : public UAdvancedCharacterMovement
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnSprintPreventionDecaySpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnSprintPreventionDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnSprintPreventionThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ChasingSprintTimeStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RushSprintTimeStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BeingChasedSlowdownTimeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAngleToChase;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ChasingMaxDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ChasedMaxDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeToBreakUsChasing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeToBreakUsBeingChased;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinTimeToStartChasing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinTimeToStartBeingChased;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxWalkSpeedCrouchedWithRatPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SprintModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PartialSprintModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SupersprintModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BackpedalModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrafeModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WalkAcceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PartialSprintAcceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SprintAcceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SprintTimeToReachMaxSprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SprintTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SupersprintAcceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MotionSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MotionBackpedalSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EquipmentBackpedalSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ArmorSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ArmorAccelerationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EquipmentSpeedBonusPercentage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EquipmentAccelerationBonusPercentage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementModifier MovementModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsSprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSprintIsAllowed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlyPartialSprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsSupersprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackGroundFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackFallingLateralFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackUpImpulse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSpeedFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseGroundFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseFallingLateralFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakingDecelerationFallingTooFast;

	UFUNCTION(BlueprintCallable, Category = "MordhauMovementComponent")
	void Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauMovementComponent")
		bool IsInKnockback();
	UFUNCTION(BlueprintCallable, Category = "MordhauMovementComponent")
		float GetSpeedFactor();
	UFUNCTION(BlueprintCallable, Category = "MordhauMovementComponent")
		float GetAccelerationFactor();

};