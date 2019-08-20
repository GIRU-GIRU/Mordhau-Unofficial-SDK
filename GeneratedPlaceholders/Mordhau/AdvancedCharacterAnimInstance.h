#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacterAnimInstance.generated.h"

UCLASS()
class UAdvancedCharacterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsGrounding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RootTranslationOffsetInternal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RootTranslationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RootRotationOffsetInternal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RootRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RootRotationPivot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslationInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RotationInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RootRotationOffsetFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LimbRotationOffsetFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D RootLiftLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GroundingWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector AccumulatedLocationLag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator AccumulatedTurnLag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAirborne;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastLand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastJump;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AirborneTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bJumped;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAirborneFromJump;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsDead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeathDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AdditiveOverrideType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdditiveOverrideWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdditiveOverrideNoneTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdditiveOverrideTypeNormalizedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchIsHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AltFlinchDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AltFlinchIsHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastDeltaSeconds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRanPostEvaluateThisFrame;


};