#pragma once

#include "CoreMinimal.h"
#include "HorseAnimInstance.generated.h"

UCLASS()
class UHorseAnimInstance : public UCreatureAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SoundTrot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SoundCanterFront;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SoundCanterBack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SoundGallopLeft;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SoundGallopRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FastFootstepParticlesMinVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*> FastFootstepParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D BackLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D FrontLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RootOffsetTranslationToRotationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BackOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LeftBackLegOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightBackLegOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FrontOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LeftFrontLegOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightFrontLegOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRearing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceDuckLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopTiltFactorLeftRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopTiltFactorForward;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopTiltFactorBack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopBounceLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeadStopTiltFactorLeftRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeadStopTiltFactorForward;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeadStopTiltFactorBack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeadStopBounceLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeadBounceInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FastVelocityLagTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlowVelocityLagTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator StopBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator StopBounceWorld;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HeadStopBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HeadStopBounceWorld;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BounceDuck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FastVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SlowVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FastVelocityChangeVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SlowVelocityChangeVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator PreviousMeshRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrontBackLegsDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeetShuffleWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FeetShuffleAnimRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HorseVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimatedHorseVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopSmoothSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementAnimRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HorseDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LeanFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SmoothedDirectionSmoothTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SmoothedDirectionSmoothTimeNoMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator FrontHorseRotator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator BackHorseRotator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HorseLeanRotator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector HorseLeanOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HorseHeadRotator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HasDriverFloat;


};