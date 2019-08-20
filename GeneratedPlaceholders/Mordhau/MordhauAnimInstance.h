#pragma once

#include "CoreMinimal.h"
#include "MordhauAnimInstance.generated.h"

UCLASS()
class UMordhauAnimInstance : public UCreatureAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InternalScaledTimeSeconds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnimNodePackedFaceCustomization FaceCustomization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnimNodePackedDismemberment Dismemberment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> PreviousRightHandEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*> CrouchFootstepParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*> SprintFootstepParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* FootstepSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MainAnimationType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasRagdollFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRagdollFallingTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Force1PMeshCorrectionWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldPerformInstantAnimSwitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsGetUpFront;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GetUpAnimationDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator GetUpRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DeathSyncedRandom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsDedicatedServer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimLOD0;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimLOD1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RecentlyRendered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RecentlyRenderedNonAuth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimLOD0Distance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimLOD1Distance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsFemale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsClimbingA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbOffsetA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbOffsetEndOffsetA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbLedgeOffsetA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsSlowClimbingA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator ClimbRotationA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsClimbingB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbOffsetB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbOffsetEndOffsetB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ClimbLedgeOffsetB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator ClimbRotationB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsSlowClimbingB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FastSmoothedIsCrouching;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UnclampedFastSmoothedIsCrouching;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatSpringState CrouchSpringState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D CrouchSpringLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CrouchSpringStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UncrouchSpringStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CrouchSpringDamping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CrouchSpringMass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* VehicleTransitionAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleTransitionBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VehicleTransitionComponentLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator VehicleTransitionComponentRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsDrivingFloat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LowerBodyRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Direction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator MovementCorrectionHips;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementCorrectionHipsInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementCorrectionAnimRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirectionWithOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirectionOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirectionOffsetSlowInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirectionOffsetSlow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Velocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SmoothedVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OneToZeroAtWalkSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimRateFactor1PMaxSprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementSpeedScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MovementAnimRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpeedWarping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThirdPersonVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseBackBlendSpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator StopBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator StopBounceWorld;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopBounceLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BounceDuck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceDuckLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SlowVelocityLagTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FastVelocityLagTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopTiltFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StopDuckFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngularVelocityInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngularVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AbsoluteAngularVelocityLowerBody;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngularVelocityLowerBody;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngularVelocityLowerBodyWindow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector AnimatedMovementDirectionInCompSpace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngularVelocityPitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SpringPitchYawValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatSpringState PitchSpringState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatSpringState YawSpringState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SpringPitchYawStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SpringPitchYawDamping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D SpringPitchYawMass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HandSpringWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFirstPerson;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsFirstPersonFloat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsNotFirstPersonFloat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FirstPersonZoomOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CameraCollisionOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform RightWeaponBoneBaseTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector WeaponSlideVector;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector WeaponSlideVectorInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WeaponSlideCompensationWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightShoulderOffset1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LeftShoulderOffset1P;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShoulderOffset1PWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightHandIKOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RightHandIKOffsetWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffhandIKWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LeftHandGripPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightHandGripPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RightHandGripRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffhandIsRightHand;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* JumpAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* FallingAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LandAnimation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncyMagnitudeOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncySlowVelocityLagTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncyFastVelocityLagTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncyInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncyFactorBreasts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncyFactorArms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncyFactorBelly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BouncyFactorLegs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BreastsT;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LowerBackBellyT;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SpineAdjustT;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LeftArmAdjustT;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightArmAdjustT;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LeftUpLegAdjustT;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RightUpLegAdjustT;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Fat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Skinny;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Strong;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsHeadDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator NeckDismemberedRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LeftShoulderDismemberedRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsLeftArmDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RightShoulderDismemberedRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IsRightArmDismembered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrackingWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LookingAtRotationNeck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LookingAtRotationHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LookingAtRotationEyes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HideEars;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HideNose;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Breath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LowerBodyBreathInternal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LowerBodyBreathFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LowerBodyBreathFactorTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CounterCompensateLookWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator CounterCompensateRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LookUpValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RightLegBendBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpineBendBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpineArmsCompensationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LeftHandIsEmpty;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AtmosphericsWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Arms3PSyncWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlockDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DisarmDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive SpineSpaceAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LeftTorsoBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStabBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStabBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStrikeBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStrikeBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* RightStabChambered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LeftStabChambered;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* RangedDrawnAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator SwayRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SwayWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* ParryAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* ParryPushAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* AltParryPushAdditive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LowerBodyBlendSpaceBlendTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* UpperBlendSpaceA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UpperBlendSpaceABlendTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UpperAdditiveA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase* UpperBlendSpaceB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UpperBlendSpaceBBlendTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* UpperAdditiveB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsCurrentUpperA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LowerBodyAnimationA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* LowerBodyAnimationB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* HorseUpperRearing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsCurrentLowerA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHorseRearing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Couching;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Rearing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Lean;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleAnimTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleAnimRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VehicleLeftHandTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VehicleRightHandTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleTurn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleLookUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VehicleLeftFootTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VehicleRightFootTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator VehicleLeftFootRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator VehicleRightFootRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VehicleDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector VehicleSeat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator VehicleActorRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator VehicleRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator VehicleSeatRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bBallistaReloading;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitEffectIKWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitEffectLocationSlideSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HitEffectDisableSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector HitEffectIKLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector HitEffectIKLocationStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HitEffectRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HitEffectRotationStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchFreezeBlendInDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchFreezeRotationBlendInSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchFreezeTranslationBlendInSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchFreezeBlendInAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchBlendInDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchRotationBlendInSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchTranslationBlendInSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchRotationBlendOutSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchTranslationBlendOutSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchRotationBlendOutSpeedFast;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchTranslationBlendOutSpeedFast;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchPitchAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchYawAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchPitchYawFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchHipsZFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WeaponDirHipsZFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslationNonHipsFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator FlinchRotationTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FlinchTranslationTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FlinchHipsTranslationTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FlinchHitSpineIdx;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FlinchStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator CurrentFlinchSpineRotationsCombined;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HipsFlinchRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector HipsFlinchTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector HipsFlinchTranslationInternal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator LowerBackFlinchRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LowerBackFlinchTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator SpineFlinchRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SpineFlinchTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Spine1FlinchRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Spine1FlinchTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator NeckFlinchRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector NeckFlinchTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator HeadFlinchRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector HeadFlinchTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_UBCrouchAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_LBCrouchAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_UBCrouchSpine;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_UBCrouchForearms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_UBCrouchArms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_UBCrouchHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_UBCrouchShoulder;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_UBSpineArmsCompensationAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_UBSpineArmsCompensationRotator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHelper_LBFootShuffling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_LBFootShufflingPlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHelper_LBFootShufflingRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_LBDirectionOffsetSlowRotator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_LBDirectionOffsetSlowRotatorInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_LBDirectionOffsetSlowHipsZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_LBDirectionOffsetSlowHipsZInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_LBDirectionOffsetSlowFootRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_UBVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHelper_LBVelocityIsZero;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_LBCrouchOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_LBCrouchOffsetInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_LBHipsZOverrideAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_TrackingWeightAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_BreathAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_IsNotDrivingFloat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_HipsFlinchTranslationInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_HipsFlinchRotationInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_ArmsShoulderFlinchInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_FirstPersonNotDead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_FirstPersonZoomOffsetInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_FirstPersonZoomOffsetAndCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_CameraCollisionOffsetWithNot3PArmsSync;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_FirstPersonNotDeadWith3PArmsSync;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_IsNotFemale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_SpineBendBlendWeightHalf;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_SpineBendBlendWeightThird;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_GroundingRightFootRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_GroundingLeftFootRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_GroundingRightFootTranslationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_GroundingLeftFootTranslationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NotFirstPersonWithAtmospherics;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_FaceUpperLids;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_LeftHandIKWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_RightHandIKWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_RootRotationOffsetInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_StopBounceMediumWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_StopBounceLightWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_StopBounceInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_StopBounceHips;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_BounceDuckWithBounceWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_BounceDuckWithBounceWeightInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_SpineBendRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_HipsBendRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_SpineBendRotationAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_RightLegBendRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_ArmsBendRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AtmosphericsWeightWithAnimLOD0;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_LowerBodyRotationOffsetInverse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Helper_RightWeaponBoneBaseTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_RightWeaponBoneBaseRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator Helper_SpringPitchYawValueRotator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_HandSpringWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_ShoulderOffset1PWith1PWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Helper_JiggleBouncyWeight;


};