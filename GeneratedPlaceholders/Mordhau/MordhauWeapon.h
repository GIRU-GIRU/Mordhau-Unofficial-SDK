#pragma once

#include "CoreMinimal.h"
#include "MordhauWeapon.generated.h"

UCLASS()
class AMordhauWeapon : public AMordhauEquipment
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastWoosh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAreCurrentTracersValid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bArePreviousTracersValid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAreCurrentTracersInvalidated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasAdditionalTracers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSecondHasAdditionalTracers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CurrentTraceStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CurrentTraceEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousTraceStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousTraceEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CurrentAdditionalTraceStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CurrentAdditionalTraceEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousAdditionalTraceStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousAdditionalTraceEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttackMove LastObservedMove;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVector> LastTraceStarts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FActorSetAndArray CosmeticIgnoreActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FHitResult> HitResultCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanBlock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanBlockOnFoot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanBlockOnHorseback;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanCouchOnHorseback;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CouchWindUpAnim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CouchWindUpAnim1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CouchLoopAnim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CouchReleaseAnim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CouchReleaseAnim1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDismembermentType StrikeDismembermentType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDismembermentType SecondStrikeDismembermentType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDismembermentType StabDismembermentType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDismembermentType SecondStabDismembermentType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlideRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AttackSupersprintDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondAttackSupersprintDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo StabAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo SecondStabAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo CouchAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo SecondCouchAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo StrikeAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo SecondStrikeAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo KickAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo SecondKickAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo BashAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AttackMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ParryMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform ParryBoxTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ParryTurnCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ParrySuccessTurnCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ParryViewToleranceX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ParryViewToleranceY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SuccessfulParryViewToleranceX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SuccessfulParryViewToleranceY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D AttackParryViewToleranceX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D AttackParryViewToleranceY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ChamberViewToleranceX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ChamberViewToleranceY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryBackpedalSpeedFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsParryHeld;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BoostCosmeticTracersBy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUsesExtraEnvironmentTracers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char IgnoreEnvironmentTipTracersNum;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float bHitKnockbackOnTeammates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClashNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SecondClashNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovementRestriction BlockMovementRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlockStaminaNegation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D BlockStaminaClamp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondBlockStaminaNegation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SecondBlockStaminaClamp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* ClashCollider;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* BlockCollider;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* WeaponAnimationProfileClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* SecondWeaponAnimationProfileClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* HorseWeaponAnimationProfileClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* LadderWeaponAnimationProfileClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile* HorseWeaponAnimationProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile* LadderWeaponAnimationProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile* WeaponAnimationProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile* SecondWeaponAnimationProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* BlockedSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* HitCancelSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* WasBlockedSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D EnvironmentPitchScaleByDamageIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D EnvironmentPitchScaleByDamageOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D EnvironmentVolumeScaleByDamageIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D EnvironmentVolumeScaleByDamageOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WooshVolumeMultiplierViewTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* StrikeHitSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* StabHitSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* EnvironmentHitSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SecondStrikeHitSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SecondStabHitSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SecondEnvironmentHitSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* StrikeWooshSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* StabWooshSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SlideStartSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SlideEndSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDeriveHandGripFromTracers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSecondDeriveHandGripFromTracers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasWoodenHandle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrailLifeTimeFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrailExtraTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BloodTrailMaxDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SwingTrailFadeOutDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* SwingTrailParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* BloodTrailParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* BlockParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* HitCancelParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*> ImpactParticlesBySurface;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* SlideParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauWeapon> SlidingWith;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* EndCurrentSlideWithSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlidingStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> CurrentSlideStartSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastHitSoundA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastHitSoundB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentSlideParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentSwingTrailParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentBloodTrailParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrailTimeBeforeStop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SwingTrailOriginalLifeTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SwingTrailEndTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BloodTrailEndTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Length;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BloodLevel1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BloodLevel2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPlayedHitEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector TrailUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SecondTrailUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector TrailRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SecondTrailRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultTrailFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondDefaultTrailFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRegularAttacksUseBlood2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSecondRegularAttacksUseBlood2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrailFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondTrailFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrailWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform LastTrailTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastObservedTraceDirection;

	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
	void UpdateTrail(float Weight);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		bool RequestBlock(EBlockType BlockType, bool bAllowFTP);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void OnWasBlocked(EBlockedReason Reason, EAttackMove Move, unsigned char SurfaceType);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void OnHit(class AActor* Actor, EAttackMove Move, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void OnCosmeticHit(EAttackMove Move, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void OnBlockStarted(EBlockType Type);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void OnBlocked(EBlockedReason Reason, EAttackMove Move);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void OnAttackStopped();
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void OnAttackStarted(EAttackMove Move, float Angle);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		void IncreaseBloodLevel(float Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeapon")
		struct FAttackInfo GetBaseAttackInfo(EAttackMove Move);

};