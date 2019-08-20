#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacterMovement.generated.h"

UCLASS()
class UAdvancedCharacterMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastFallingCheckVelocityZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCrowdManager* CrowdManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseMordhauRotationInterpMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MordhauRotationSmoothStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQuat MordhauRotationSmoothFrom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StillTimeWhileRagdollFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PerchRadiusThresholdRagdollFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinVelocityForFallDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FallDamageOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FallDamageFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollMinVelocityForFallDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallDamageOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallDamageFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bReverseBackwardsTurning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUsePendingRotationToOrientMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PendingTurnValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIgnoreMovementInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> ChildrenSkipperCachedArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OffsetMeshTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OffsetExtrapolation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OffsetExtrapolationTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OffsetCorrectionLeftover;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OffsetNetSmoothLeftover;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector OffsetNetSmoothPending;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MovementComponentMeshOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AuthNetSmoothTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AuthNetMaxSmoothDist;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableAuthNetSmoothing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SkipPredictionForAnimTickSkipOrGreater;


};