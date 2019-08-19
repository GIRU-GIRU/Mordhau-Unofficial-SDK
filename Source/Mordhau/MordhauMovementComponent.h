// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacterMovement.h"
#include "MordhauMovementComponent.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EMovementModifier : uint8
{
	Walk = 0,
	Strafe = 1,
	Backpedal = 2,
	PartialSprint = 3,
	Sprint = 4,
	Rush = 5,
	Chasing = 6,
	Supersprint = 7,
	EMovementModifier_MAX = 8
};
UCLASS()
class MORDHAU_API UMordhauMovementComponent : public UAdvancedCharacterMovement
{
	GENERATED_BODY()
	

public:
	float                                              TurnSprintPreventionDecaySpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              TurnSprintPreventionDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              TurnSprintPreventionThreshold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ChasingSprintTimeStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              RushSprintTimeStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              BeingChasedSlowdownTimeFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxAngleToChase;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//struct FVector                                     ChasingMaxDistance;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
		//struct FVector                                     ChasedMaxDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              TimeToBreakUsChasing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              TimeToBreakUsBeingChased;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinTimeToStartChasing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinTimeToStartBeingChased;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxWalkSpeedCrouchedWithRatPerk;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SprintModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              PartialSprintModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SupersprintModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              BackpedalModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              StrafeModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              WalkAcceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              PartialSprintAcceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SprintAcceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SprintTimeToReachMaxSprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SprintTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SupersprintAcceleration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MotionSpeedFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MotionBackpedalSpeedFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              EquipmentBackpedalSpeedFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ArmorSpeedFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ArmorAccelerationFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              EquipmentSpeedBonusPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              EquipmentAccelerationBonusPercentage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EMovementModifier>                                  MovementModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bWantsSprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bSprintIsAllowed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bOnlyPartialSprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bWantsSupersprint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              KnockbackGroundFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              KnockbackFallingLateralFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              KnockbackUpImpulse;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxSpeedFalling;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              BaseGroundFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              BaseFallingLateralFriction;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              KnockbackDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              BrakingDecelerationFallingTooFast;

	UFUNCTION(BlueprintCallable, Category = "MordhauMovementFns")
		void Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauMovementFns")
		bool IsInKnockback();
	UFUNCTION(BlueprintCallable, Category = "MordhauMovementFns")
		float GetSpeedFactor();
	UFUNCTION(BlueprintCallable, Category = "MordhauMovementFns")
		float GetAccelerationFactor();

	
	
};
