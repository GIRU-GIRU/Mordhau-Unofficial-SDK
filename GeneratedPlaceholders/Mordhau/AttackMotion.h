#pragma once

#include "CoreMinimal.h"
#include "AttackMotion.generated.h"

UCLASS()
class UAttackMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitCancelDamageModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ActiveParryStaminaCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RecoveryQueueWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsComboFromMiss;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MissTwiceStaminaCostMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayAttackYellTimeReleaseOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteTradeDamageFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteWindUpCanParryWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRiposteAteFeintInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitRecovery;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitRecoveryKick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeRiposteEarlyRelease;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClashAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeAnimationNormalizedRecoveryOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeChamberWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabChamberWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MorphKickExtraTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* WindUpCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ReleaseCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile* AnglingWeaponAnimationProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeWooshTimeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabWooshTimeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickWooshTimeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeReducedAnglingFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeEarlyReleaseTimeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeRiposteEarlyReleaseTimeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ForceRecoveryMinimumTurnAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SupersprintDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ExtraEarlyReleaseForLookUpOverheads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ExtraEarlyReleaseForLookUpNonUndercuts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ToChamberAttackAngleTolerance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RegularFeintWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ComboFeintWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MorphWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxMorphTotalTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReleaseJumpBlockTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrikeEarlyRelease;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabRiposteEarlyRelease;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StabEarlyRelease;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ChamberStaminaRecover;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickEarlyRelease;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinWindUpTimeBeforeMorphing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EarlyReleaseIsClashableAfter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalAttackBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalAttackBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalAttackSlowBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalAttackSlowBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalAttackParrySlowBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NormalAttackParrySlowBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KickBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BashBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BashBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ComboBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ComboBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PostClashBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PostClashBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MorphBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MorphBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteBlendIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteBlendInWithShield;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteBlendIn1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RiposteBlendInWithShield1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendOut1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MissPlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MissPlayRate1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuccessfulHitBlendOutAnimTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuccessfulHitPlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuccessfulHitStrikeBlendOutAnimTime1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuccessfulHitStrikePlayRate1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuccessfulHitBlendOutAnimTime1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SuccessfulHitPlayRate1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove ComingFromMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParryMotion* ComingFromAsParry;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo AttackInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive TargetAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive ReducedTargetAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive WindUpAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CounterCompensateOverheadFixupTerm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CounterCompensateOverheadFixupTiltTerm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CounterCompensateWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxTurnCompensation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CounterCompensateLookTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngleTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastReleaseNormalizedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastWindupNormalizedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackType Type;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove Move;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WindupEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReleaseEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Montage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* QueuedAnimFor3PRelease;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* LeftTorsoMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauWeapon* Weapon;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAttackMotion* PreviousLastAttackMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasQueuedServerCombo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueuedServerComboAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove QueuedServerComboMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasQueuedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float QueuedAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove QueuedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackStage Stage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasHit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasHitIncludingCosmeticHit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstHitTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstHitIncludingCosmeticReleaseNormalizedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasChambered;

	UFUNCTION(BlueprintCallable, Category = "AttackMotion")
	void SetHasHitIncludingCosmeticHit();

};