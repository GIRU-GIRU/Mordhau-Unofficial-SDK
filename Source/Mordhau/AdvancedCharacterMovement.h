// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AdvancedCharacterMovement.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UAdvancedCharacterMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastFallingCheckVelocityZ;
//UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	class UCrowdManager*                               CrowdManager;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUseMordhauRotationInterpMode;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MordhauRotationSmoothStartTime;
//UPROPERTY(EditAnywhere, BlueprintReadWrite)
//	struct FQuat                                       MordhauRotationSmoothFrom;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StillTimeWhileRagdollFalling;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PerchRadiusThresholdRagdollFalling;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinVelocityForFallDamage;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FallDamageOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FallDamageFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RagdollMinVelocityForFallDamage;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RagdollFallDamageOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RagdollFallDamageFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bReverseBackwardsTurning;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUsePendingRotationToOrientMovement;
//UPROPERTY(EditAnywhere, BlueprintReadWrite)							// POSSIBLY USEFUL, ADD BACK
//	struct FVector                                     PreviousVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              PendingTurnValue;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIgnoreMovementInput;
/*UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     OffsetMeshTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     OffsetExtrapolation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     OffsetExtrapolationTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     OffsetCorrectionLeftover;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     OffsetNetSmoothLeftover;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     OffsetNetSmoothPending;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     MovementComponentMeshOffset;*/
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AuthNetSmoothTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AuthNetMaxSmoothDist;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDisableAuthNetSmoothing;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                SkipPredictionForAnimTickSkipOrGreater;
	
	
	
};
