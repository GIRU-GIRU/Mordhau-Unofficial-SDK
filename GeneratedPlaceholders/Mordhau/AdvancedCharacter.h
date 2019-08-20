#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacter.generated.h"

UCLASS()
class AAdvancedCharacter : public ACharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TickSkip;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AnimationTickSkip;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OutOfBoundsCounter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OutOfBoundsSince;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauPlayerController> InstanceOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsDead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsBurning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRagdollFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName RagdollFallingFromCollisionProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsUsingRagdollFallingCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingFromPerchRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RagdollFallingFromPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsBurningSmoothed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceIntoFireFieldSmoothed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceIntoFireField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceIntoSmokeFieldSmoothed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceIntoSmokeField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnCharacterDied;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnCharacterDestroyed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int UniqueAdvancedCharacterIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothedTurnValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothingTurnVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothedLookUpValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothingLookUpVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPrePhysTickFunction PrePhysTickFunction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDeltaTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName QueuedForDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bQueuedDismemberIsPartial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bQueuedDismemberIsBluntForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MoveCompVelocityBeforeDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastNonZeroVelocityTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanReceiveClientsideHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> DissolveMaterialInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DissolveDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DissolveValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastSetDissolveValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULateTickComponent* LateTickComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	double DistanceToCameraHeuristic;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceToCamera;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSkipAnimPoseOnClientWhenNotRendered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName DistanceToCameraBoneToUse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LODRank;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bFancyMeshEffects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FancyMeshEffectsTurnOnDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FancyMeshEffectsTurnOffDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceMaxQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedCharacterFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasEverPossessedByLocalPlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastPossessionTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MeshPauseAnimsLifetime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName RagdollFallingProfileName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RagdollFallingPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingGetUpDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RagdollFallingApplyForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RagdollFallingApplyForceAir;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName RagdollFallingApplyForceBoneName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingGetUpStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingBlendOutSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingMinTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingMinVelocityToGetUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollFallingTimeAtMinVelocityToGetUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PhysicsBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PhysicsBlendTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PhysicsBlendSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpCooldown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bJumped;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAirborneFromJump;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AirborneTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SmokeDistanceMaxValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SmokeDistanceSmoothInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMasterField> CurrentSmokeField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsBurningSmoothInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FireDistanceMaxValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FireDistanceSmoothInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMasterField> CurrentFireField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AController> FireInstigator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> FireAgent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FireDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FireDamageTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FireEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastFireDamageTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMeshesReceiveDecals;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauProjectile* CurrentProjectile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTurnUsesControllerInputYawScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAddForwardAxisToMovementInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAddRightAxisToMovementInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpawnTurnValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookDownLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedLookUpValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpValueSmoothingTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpValueSmoothingFrom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpValueSmoothingStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnRateCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnRateCapTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpRateCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpRateCapTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTurnRateIgnoresCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnCapRemaining;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpCapRemaining;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastObservedLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector AccumulatedLocationLag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFloatAndVector> DelayedLocationDeltas;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentLocationLagInduction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LocationLagInductionTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LocationLagInductionChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LocationLagInductionCounterweight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastObservedLook;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector AccumulatedLookLag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFloatAndVector> DelayedLookDeltas;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentLookLagInduction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookLagInductionTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookLagInductionChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookLagInductionCounterweight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPerformCustomDepthHighlight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHighlighted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsInteractable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAnimUpdateRateOptimizations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* MarkerWidgetComponentClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* MarkerWidgetClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform MarkerWidgetRelativeTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MarkerWidgetAttachSocket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauWidgetComponent* MarkerWidgetComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsNonCombatCharacter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWillStopMelee;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWillBleedOutOnKill;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BleedingOutRemainingTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsBleedingOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> LastDamageAgent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> LastDamageSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AController> LastDamageInstigator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* DeathParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName DeathParticlesSocket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Health;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedHealth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HealthRegenDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char HealthRegenPerTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HealthRegenTickRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIgnoreGameStateHealthRegenRestriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NextHealthTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OutOfBoundsKillTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAllowedOutOfBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReceivedDamageModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReceivedTeamDamageModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReceivedFireDamageModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReceivedRangedDamageModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReceivedDamageAbsorption;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackFlinch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* HitEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* BurningParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName BurningAttachSocket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* BurningSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* FallDamageSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName FallDamageSoundAttachToBone;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentBurningParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> CurrentBurningSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNetDamage NetDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeathTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceLongDeathYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FootstepAudioComponentCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAudioComponent*> FootstepAudioComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* HurtYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* DeathYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> DeathScreamPtr;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DedicatedServerAnimFrameSkipLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AdditiveOverrideType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdditiveOverrideEndTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdditiveOverrideStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName LastFlinchAdditiveName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastFlinchAdditiveTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastSetBloodIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MaxWounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char LastWound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FWoundMaterialData> Wounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName BloodIntensityParamName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USkeletalMeshComponent*> BloodReceivingSkeletalMeshes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPhysicalSurface> CharacterSurface;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSphericalLimbBounds> SphericalLimbs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollForceMultIfDmgAgent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceRagdollIfDmgAgent;

	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
	void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void TurnNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void TurnAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void Turn(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool Trip();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void Suicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void StopRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void StopHealthRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void StopBurningCosmetic();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void StartRagdollWithBlend(float BlendDuration);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void StartRagdoll();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void StartBurningCosmetic();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> AttachType, const struct FName& Socket, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void SetOnSmoke(class AMasterField* SmokeField);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void SetOnFire(class AMasterField* FireField);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void SetLookLagInductionTarget(float Amount, float ChangeSpeed);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void SetLocationLagInductionTarget(float Amount, float ChangeSpeed);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void SetIsRagdollFalling(bool bInIsRagdollFalling);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void SetAdditiveOverrideType(const struct FName& NewType, float Duration);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ServerTrip();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ServerSuicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ServerLookUp(float NewLookUp);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ResetLookLagInductionTarget();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ResetLocationLagInductionTarget();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ResetLagInductionTargets();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ResetAdditiveOverrideType();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void RequestTrip();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void RequestSuicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void RequestMeshEnablePhysics(float Duration);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ReplicateHealth();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void RegisterMaterialToDissolve(class UMaterialInstanceDynamic* Mat);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const struct FName& bone, bool bFindOptimalSpot);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		class UAudioComponent* PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& InLocation, TEnumAsByte<EAttachLocation> AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnTookDamage(bool bWillKill, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnRep_Team();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnRep_SpawnTurnValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnRep_ReplicatedLookUpValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnRep_ReplicatedHealth();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnRep_ReplicatedCharacterFlags(unsigned char OldValue);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnRep_NetDamage();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnKilled(class AController* EventInstigator);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnInteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnInteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnHit(class AActor* Actor, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnHighlightStart();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnHighlightEnd();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnHealthChanged();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnDied(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnCosmeticHit(EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OnAfterDied(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void OffsetHealth(int Amount, bool bReplicate);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void MoveRight(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void MoveForward(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		float MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, EMordhauDamageType DamageType, unsigned char DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void LookUpNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void LookUpAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void LookUp(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void LeftOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool IsOutOfBounds();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool IsLocallyPlayerControlled();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool IsLocallyControlledOrUncontrolled();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool IsAirborne();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void InteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		float GetRawLookUpValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		float GetOutOfBoundsTimeUntilDeath();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		float GetLookUpValue();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool GetIsDead();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool GetIsBurning();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		float GetDistanceIntoSmokeFieldSmoothed();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		float GetDistanceIntoSmokeField();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool GetBestStickyLocation(const struct FVector& InLocation, struct FVector* OutLocation, struct FVector* OutNormal, struct FName* OutBone);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		unsigned char GetArmorTierForBone(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		float GetAdditiveOverrideTypeNormalizedTime();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		struct FName GetAdditiveOverrideType();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void EnteredOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void DouseFire();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool CanInteract(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		bool CanBleedOutFromHit(const struct FHitResult& HitResult, EMordhauDamageType Type, unsigned char SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void BPLODTick(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void BeginFlinchAdditiveOverride(const struct FName& FlinchOverrideName, const struct FName& AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void AssignNetDamage(unsigned char InType, unsigned char InSubType, unsigned char InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void ApplyRagdollForce(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void AddWound(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const struct FName& bone, class AActor* Agent, EMordhauDamageType DamageType, unsigned char DamageSubType);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharacter")
		void AddTurnDegrees(float Delta);

};