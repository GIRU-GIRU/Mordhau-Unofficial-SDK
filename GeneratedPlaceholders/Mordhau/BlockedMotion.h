#pragma once

#include "CoreMinimal.h"
#include "BlockedMotion.generated.h"

UCLASS()
class UBlockedMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove FromMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasQueuedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueuedAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove QueuedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EBlockedReason BlockedReason;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasFadedOutProcedural;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoReleaseBounceProcedural;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* FromAttackMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueueWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueueWindowHit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementRestriction MovementRestrictionHit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementRestriction MovementRestrictionWorld;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementRestriction OriginalMovementRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClashFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClashFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabWorldFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabWorldFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabParryMinMaxRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabParryFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabParryMinMaxRange3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabParryFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabChamberedMinMaxRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabChamberedFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabChamberedMinMaxRange3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D StabChamberedFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParriedRecoveryTimeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ParriedRecoveryTimeLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ChamberedRecoveryTimeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ChamberedRecoveryTimeLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ProceduralHitStopBounceCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ProceduralHitStopBounceScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ProceduralHitStopReleaseScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ProceduralHitStopBounceCurve3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ProceduralHitStopBounceScaleCurve3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ProceduralHitStopReleaseScaleCurve3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralHitStopTimeUntilFade;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralHitStopBounceDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralHitStopFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralHitStopTimeUntilFade3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralHitStopBounceDuration3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralHitStopFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabHitStopFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabHitStopFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickHitStopBlendOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickHitStopAnimRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteParryRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitStopRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickHitStopRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitCancelRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WorldRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClashedRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickClashedRecoveryTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ReleaseScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ReleaseScaleCurve3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryMinMaxRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryTimeUntilFade;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryBounceDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberMinMaxRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberTimeUntilFade;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberBounceDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralWorldTimeUntilFade;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralWorldBounceDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralWorldFadeOutTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryMinMaxRange3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryTimeUntilFade3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryBounceDuration3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralParryFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberMinMaxRange3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberTimeUntilFade3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberBounceDuration3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ProceduralChamberFadeOutTime3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralWorldTimeUntilFade3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralWorldBounceDuration3P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProceduralWorldFadeOutTime3P;


};