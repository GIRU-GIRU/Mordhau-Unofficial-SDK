#pragma once

#include "CoreMinimal.h"
#include "MordhauCharacter.generated.h"

UCLASS()
class AMordhauCharacter : public AAdvancedCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, class UMordhauWearable*> WearableProtectionCoverageMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastAttackYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastHurtYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHoldingBlock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive OverrideSpineSpaceAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseOverrideSpineSpaceAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDistFromBoneForAnyDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAngleDistFromBoneForAnyDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDistFromBoneForFullDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAngleDistFromBoneForFullDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollMaxDistFromBoneForAnyDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollMaxDistFromBoneForFullDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeathEquipmentRagdollAngularFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeathEquipmentRagdollTranslationalFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasScaryFace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ScaryFaceRotationLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ScaryFaceTranslationLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ScaryFaceScaleLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive SpineSpaceAdditiveTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive SpineSpaceAdditiveFrom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLeftArmDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRightArmDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLeftLegDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsRightLegDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* BodySkeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* BodyRagdollPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* ShadowPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LODMasterMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* HelmetCoifMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* ChestShouldersMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* ArmsGlovesMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LowerChestMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LegsBootsMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* HelmetCoifChestMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LegsBootsChestLowMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* ArmsGlovesShouldersMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* ServerMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* Eyes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* FemaleEyes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* LeftArm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* LeftArm1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* RightArm;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* RightArm1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* LeftHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* LeftHand1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* RightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* RightHand1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* LeftLeg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* RightLeg;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* LeftFoot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* RightFoot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* Torso;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BodyPart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFacialBoneSetup> FaceCustomizationSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> BakedDefaultFaceValuesTranslate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> BakedDefaultFaceValuesRotate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> BakedDefaultFaceValuesScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRegenerateBakedDefaultFaceValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotAnimateBreathing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotUseGrounding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsSoundDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotLookAtOthers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FootstepVolumeModifierWithRatPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FallDamageModifierWithCatPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, int> BoneToParentGroupIdx;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<int, int> BoneIdxToSculptableFaceBoneIdx;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<int, int> SelectionBoneIdxToSculptableFaceBoneIdx;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, int> BoneNameToSculptableFaceBoneIdx;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedDodge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedVoiceCommand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AttackYellVolumeMultiplierViewTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VoiceCommandQueueDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class ACustomizationReplicationActor> ReplicatedCustomizationReplicationActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTransform> FaceCustomizationBonesTransforms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClothBlendWeightInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULODSkeletalMeshComponent*> SlaveSkeletalMeshComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* QuiverStaticMeshComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AControlPoint* CurrentCapturePoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentCapturePointTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceInstantMeshUpdate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceMipStreaming;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UnifiedMeshDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SeparatedMeshDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> LODIncreaseDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> LODDecreaseDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D FOVLODDistanceScaleIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D FOVLODDistanceScaleOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CurrentForcedLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMeshesAreInitialized;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasInvisibleBody;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMaterialsAreInitialized;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class AActor>> ActorsThatDestroyWithUs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, TWeakObjectPtr<class AActor>> AttachedGoreMeshes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentBleedOutParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* FPMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* FPDeadMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* UnifiedMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> LastMovementFrontalHitActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MoveBlockedBySlowMinInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauVehicle* CurrentVehicle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleEnterStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleTransitionInfo VehicleEnterTransitionInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleLeaveStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVehicleTransitionInfo VehicleLeaveTransitionInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform LastMeshTransformWithoutVehicle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform LastMeshTransformWithVehicle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbTargetLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastVehicleTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastNonVehicleTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauVehicle> LastUsedVehicle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastNoticeableLookChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D PreviousLookValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoticeableLookChangeMinRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDamageRecord> DamageHistory;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StaminaCostModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MeleeWindupModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MeleeComboExtraWindupModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MeleeReleaseModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MeleeMissRecoveryModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LegDamageBonusModifierAirborne;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsUnflinchable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DamageModifierWithWreckerPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HealingModifierWithSmithPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReceivedFireDamageModifierWithFireproofPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReceivedDamageModifierWithFriendlyPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Stamina;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedStamina;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char HealthRegenPerTickWithTenaciousPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char StaminaRegenPerTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StaminaRegenDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StaminaOnKill;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StaminaOnKillWithFuryPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int HealthOnKill;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int HealthOnKillWithBloodlustPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ExtraStaminaOnHitWithSecondWindPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StaminaRegenTickRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpStaminaCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpStaminaCostWithAcrobatPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementBoostDurationWithRushPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementRestrictionOverrideDurationWithRushPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastEnemyKilledTimeWithMeleeOrRanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackParry;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackWorld;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackParried;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KnockbackClash;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EasyParryUntilTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FallingTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FallingTimeToRagdoll;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastDodgeTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DodgeDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DodgeCooldown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DodgeStaminaCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasDodgeCanceled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector DodgeDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector DodgeDirectionLocal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TotalChaseTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastChaseTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TotalChasedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastChasedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ArmsBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SpineBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BreastBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BellyBouncyLimitsFat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BellyBouncyLimitsSlim;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LegsBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDelayBetweenVoiceCommands;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDelayBetweenBattlecries;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableBouncy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsVoiceMuffled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MuffledVoiceLowPassFrequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MuffledVoiceVolumeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIgnoresTeamColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHideEars;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHideNose;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeathRaiseHandForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeathRaiseHeadForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeathRaiseHipsForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FWoundInfo DismemberWoundInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsWrithingInPain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasHitAfterDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> QueuedDismemberAgent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector QueuedDismemberForceDir;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class ASeparatedBodyPart> SeparatedHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class ASeparatedBodyPart>> SeparatedBodyParts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> CurrentlyTracking;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastTrackingUpdate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData28[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauCameraComponent* MordhauCamera;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFirstPerson;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstPersonLookUpOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* CameraLocationScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* CameraZoomScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CameraStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastCameraStyleChangeTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldBlendLastCameraStyleChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxThirdPersonFOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentFOVOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentMotionFOVOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MotionFOVOffsetZeroSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentSpeedFOVOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSprintFOVOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSprintFOVOffsetInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CameraLocation1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CameraLocation1PCosmeticOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CameraLocation1PFOVOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CameraLocation1PZoomOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator CameraRotation1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator CameraRotation1PMeshSpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> InteractionTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UseHoldTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> RequestedInteractionTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CameraCollisionLocationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EllipseBubbleLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EllipseBubbleRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EllipseBubbleMaxHeightDiff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D BlockColliderForwardParryDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* BlockCollider;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform LowBlockColliderRelativeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform HighBlockColliderRelativeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform OriginalBlockColliderRelativeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastRequestedFireOrigin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LastRequestedFireRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsFire;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsBlock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsFeintOrBlock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAnimMontage*> UnarmedPreviewPoses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* FaceAttackAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* FaceBattlecryAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* FaceTalkingAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* FaceHurtAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* UnarmedUpperBlendSpace1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedUpperAdditive1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* UnarmedUpperBlendSpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedUpperAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* HorseUnarmedUpperBlendSpace1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* HorseUnarmedUpperAdditive1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* HorseUnarmedUpperBlendSpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* HorseUnarmedUpperAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedLowerAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* HorseUnarmedRearing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* HorseUnarmedRearing1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* HorseUnarmedJump;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* HorseUnarmedJump1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIgnoreAngularVelocityAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* RiposteBlendInCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* InteractWithAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* InteractWith1PAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* StunAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedJumpAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedLandAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedFallingAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedJumpAnimation1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedLandAnimation1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UnarmedFallingAnimation1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BloodHitEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BloodMetalHitEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DodgeCameraShake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* DodgeParticleEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* BleedingOutParticleEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* RunLeftHeadBobShake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* RunRightHeadBobShake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* WalkLeftHeadBobShake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* WalkRightHeadBobShake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BlockShakeEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BlockedShakeEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* FlinchShakeEffect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNetBlock NetBlock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DeathSyncedRandom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNetMotion> UnconfirmedMotionsBacklog;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNetMotion ReplicatedNetMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNetMotion NetMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNetMotion LocallyPredictedNetMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEmoteEntry> CharacterEmotes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEmoteEntry> UnarmedEmotes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauMotion* Motion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParryMotion* LastParryMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFlinchMotion* LastFlinchMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFeintedMotion* LastFeintedMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAttackMotion* LastAttackMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEmoteMotion* LastEmoteMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> ActorIgnoreCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData43[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWantsCharacterRebuild;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMordhauWearable*> WearableObjectInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile Profile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDestroyEquipmentOnDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int QueuedEquipmentSwitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char EquipmentInventorySize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AMordhauEquipment*> Equipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* RightHandEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* LeftHandEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* Quiver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AKickWeapon* KickWeapon;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstPersonAttenuationVolumeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* FirstPersonAttenuationOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* DodgeSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* DodgeSoundLocalPlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SnappyArmorFoley;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* NonSnappyArmorFoley;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* CrouchStartSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* CrouchEndSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* ReleaseFoley;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReducedBreathingVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> BreathingLevels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoBreathingAtDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* DismembermentGore;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* BluntDismembermentGore;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* OutGoreMeshBlunt;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* OutGoreMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* OutGoreMeshNeck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* LimbExplosionParticle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, float> MinimumDamageToExplode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, float> MinimumDamageToDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<struct FName, float> MinimumDamageToPartialDismember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D DismemberArmsSpineYawPitchLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastArmorFoley;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastVoiceCommand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRequestedVoiceCommandTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NextAllowedVoiceCommandTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastBreath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> LastScream;

	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
	bool ValidateInteractionTarget(class AActor* TargetActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void UseReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void UsePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void UpdateWearableInstanceColorsAndPatterns();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void UpdateQuiverMesh();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void UpdateLOD(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void UpdateAllSkeletalMeshComponentMaterials();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool TryDismember(const struct FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, EAttackMove Move, bool bIsRagdollDismember);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool TryClimbing();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SwitchToFists();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SwitchEquipmentByIndex(unsigned char Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SwitchEquipment(class AMordhauEquipment* ToSwitch);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopSupersprint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopStaminaRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopSprinting();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopMontage(class UAnimMontage* Montage, float FadeOut);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopListenForStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopListenForStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopCurrentVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopCrouching();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopAttackYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StopAnim(float FadeOut);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StartSupersprint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StartSprinting();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void StartCrouching();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SprintReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SprintPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ShowEquipmentIfViewTarget();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetQuiver(class UClass* NewQuiver);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetMaxAnimBlendWeight(float MaxAmount, class UAnimMontage** Montage);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetMaterialParamsForMergedSlot(const struct FString& Prefix, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetMaterialParamsForLODMasterSlot(const struct FString& Slot, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetFaceCustomizationTranslate(const struct FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetFaceCustomizationScale(const struct FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetFaceCustomizationRotate(const struct FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetCurrentlyTracking(class AActor* NewTrackingTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetCameraStyle(unsigned char NewStyle, bool bBlendCamera);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetAnimRate(class UAnimMontage* Montage, float NewRate);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void SetAnimPosition(class UAnimMontage* Montage, float NewPosition);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerSuggestHitDetection(class AAdvancedCharacter* OtherCharacter, const struct FVector_NetQuantize& HitLocation, unsigned char BoneId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerSetInteractionTarget(class AActor* Target);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerRequestVoiceCommand(unsigned char VoiceRequest);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerRequestPing();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerRequestPassiveInteraction(class AActor* Target);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerRequestDodge(unsigned char PackedWorldYaw);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerQueueAttack(EAttackMove Move, unsigned char Angle, unsigned char MotionID);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerDropParry(unsigned char MotionID);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerAssignNetMotion(const struct FNetMotion& NewNetMotion, unsigned char LastAuthObserved);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ServerAssignFireAim(const struct FVector& Orig, const struct FRotator& Rot);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ReweightSkinning(int BoneFrom, int BoneTo, bool bIncludeChildren, const struct FVector& ExceptNearThisPoint, float Radius, const struct FName& NearPointBone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		TArray<class AMordhauEquipment*> RestockDefaultEquipment(int MaxSlotsToRestock);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestVoiceCommand(unsigned char CommandType, bool bAllowQueue);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestUse();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestToggleWeaponMode();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestRightUpperStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestRightStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestRightStab();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestRightLowerStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestRangedCancel();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool RequestParry(EBlockType BlockType, bool bAllowFTP);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestLeftUpperStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestLeftStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestLeftStab();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestLeftLowerStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestKick();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestJump();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestHolster(unsigned char Mode);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestFire();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestFeint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestEmote(unsigned char EmoteId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestDrop();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestCouchedAttack();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestClimb(const struct FVector& TargetLocation);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestBash();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void RequestAttack(EAttackMove Move, float Angle);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ReplicateStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool QueueDismember(const struct FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class UAudioComponent* PlaySnappyArmorFoley();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class UAudioComponent* PlayNonSnappyArmorFoley();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class UAudioComponent* PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void PlayHurtYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void PlayDeathYell(bool bIsLongYell);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void PlayAttackYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class UAnimMontage* PlayAnim(class UAnimMontage* Montage, float PlayRate, bool bStopExistingMontages);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool PickUpToSlot(class AMordhauEquipment* ToEquip, unsigned char Slot);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void PerformVoiceCommand(unsigned char PackedVoiceCommand);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_RightHandEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_ReplicatedVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_ReplicatedStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_ReplicatedNetMotion();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_ReplicatedDodge();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_ReplicatedCustomizationReplicationActor();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_Quiver();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_NetBlock();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_LeftHandEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnRep_Equipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnPostProfileAssigned();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnPostDismember(const struct FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OnActionFailed(const struct FName& Reason);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void OffsetStamina(int Amount, bool bReplicate);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void MoveBlockedBySlow(const struct FHitResult& Impact);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ListenForStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ListenForStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void LeftTeamArea(int OwningTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void JumpReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void JumpPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsViewTarget();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool STATIC_IsRightLeg(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool STATIC_IsRightArm(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsPlayerControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsLocallyPlayerControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsLocallyControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool STATIC_IsLeg(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool STATIC_IsLeftLeg(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool STATIC_IsLeftArm(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsInKnockback();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsInEnemyTeamArea();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsInAnyTeamArea();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsHoldingBlock();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool STATIC_IsHead(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsBoneDismembered(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool STATIC_IsArm(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool IsAnimActive(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void Holster(class AMordhauEquipment* ToHolster);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool HasPerk(unsigned char PerkId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool HasEquipmentHeSpawnedWith();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		EMovementRestriction GetMovementRestriction();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class UAudioComponent* GetLastVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class AMordhauVehicle* GetLastUsedVehicle(float MaximumTimeDiscrepancy);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class AActor* GetLastMovementFrontalHitActor(float MaxAgeSeconds);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		struct FVector GetFaceCustomizationTranslate(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		struct FTransform GetFaceCustomizationTransform(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		struct FVector GetFaceCustomizationScale(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		struct FVector GetFaceCustomizationRotate(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		int GetFaceCustomizationBoneIdx(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool GetEquipmentIndex(class AMordhauEquipment* Equip, unsigned char* OutIndex);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class ACustomizationReplicationActor* GetCustomizationReplicationActor();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class AController* GetControllerIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class ULODSkeletalMeshComponent* GetClothMesh();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		float GetAnimWeight(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		TArray<struct FName> GetAllFaceSelectionChildBonesRecursive(const struct FName& ParentBone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ForceUpdateMeshVisibility();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void FlipAttackSideReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void FlipAttackSidePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void FireReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void FirePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class AMordhauEquipment* FindEquipmentToRestock(TArray<class UClass*> ValidEquipment);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class AController* FindBestKiller(float CutOffTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void FeintOrBlockReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void FeintOrBlockPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot9();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot8();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot7();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot6();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot5();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot4();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot3();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot2();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EquipSlot1();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool EquipSlot(unsigned char Index, bool bDisplayEquipmentList);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EnteredTeamArea(int OwningTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EnableBlockCollider();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void EmptyHands();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void DropSlot(unsigned char Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void DropEquipment(class AMordhauEquipment* ToDrop);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void DoCameraShakeIfViewTarget(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot, bool bAllowSettingsScale);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class ASeparatedBodyPart* Dismember(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void DisableLimb(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void DisableBlockCollider();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void CycleCamera();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		struct FRotator ComputeFPRotation(const struct FRotator& Offset, float InLookUpValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		struct FVector ComputeFPLocation(const struct FRotator& Offset, float InLookUpValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		struct FVector ComputeFPCosmeticLocationOffset(const struct FRotator& Rotation, struct FVector* OutFOVOffset, struct FVector* OutZoomOffset);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ClientPong();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool CheckCanEquipAlt(class AMordhauEquipment* Equip);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool CheckCanEquip(class AMordhauEquipment* Equip);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void ChangeMotion(class UMordhauMotion* NewMotion, bool bSkipDeltaTimeForward);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool CanPerformAttack(EAttackMove Move);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool CanInitiateMotion(class UClass* NewMotion, bool bAttemptCancel);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool CanEasyParry();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool CanDismember(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		bool CanAccomodate(class UClass* EquipmentToTest);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		class UAudioComponent* BP_PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& Location, TEnumAsByte<EAttachLocation> AttachLocation, bool bAttach);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void BoostAnimBlendWeight(float BoostAmount, class UAnimMontage** Montage);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void BlockReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void BlockPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void BakeFaceCustomizationTransforms(bool bDeferBake);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void AssignProfile(const struct FCharacterProfile& NewProfile);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void AssignNetMotionSimple(unsigned char MotionType, unsigned char Param0, unsigned char Param1, unsigned char Param2);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacter")
		void AssignNetBlock(EBlockedReason BlockedReason, unsigned char BlockType, EAttackMove BlockedMove, unsigned char BlockedAngle, class AActor* Weapon);

};