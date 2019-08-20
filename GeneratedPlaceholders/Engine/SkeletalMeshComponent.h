#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshComponent.generated.h"

UCLASS()
class USkeletalMeshComponent : public USkinnedMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimBlueprintGeneratedClass* AnimBlueprintGeneratedClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AnimClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimInstance* AnimScriptInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAnimInstance*> SubInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimInstance* PostProcessAnimInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisablePostProcessBlueprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSingleAnimationPlayData AnimationData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RootBoneTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LineCheckBoundsScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTransform> CachedBoneSpaceTransforms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTransform> CachedComponentSpaceTransforms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GlobalAnimRateScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDynamicActorScene UseAsyncScene;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EKinematicBonesUpdateToPhysics> KinematicBonesUpdateType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPhysicsTransformUpdateMode> PhysicsTransformUpdateMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAnimationMode> AnimationMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData07 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasValidBodies : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData08 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBlendPhysics : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnablePhysicsOnDedicatedServer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUpdateJointsFromAnimation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableClothSimulation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowAnimCurveEvaluation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableAnimCurves : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData09 : 3;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCollideWithEnvironment : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCollideWithAttachedChildren : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLocalSpaceSimulation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bResetAfterTeleport : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData10 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDeferMovementFromSceneQueries : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNoSkeletonUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPauseAnims : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseRefPoseOnInitAnim : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnablePerPolyCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceRefpose : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOnlyAllowAutonomousTickPose : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsAutonomousTickPose : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOldForceRefPose : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowPrePhysBones : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRequiredBonesUpToDate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAnimTreeInitialised : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIncludeComponentLocationIntoBounds : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableLineCheckWithBounds : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData11 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNeedsQueuedAnimEventsDispatched : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> DisallowedAnimCurves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint16_t CachedAnimCurveUidVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClothBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EdgeStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BendingStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AreaStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StrainLimitingStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShapeTargetStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseBendingElements;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseTetrahedralConstraints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseThinShellVolumeConstraints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseSelfCollisions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseContinuousCollisionDetection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* BodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnConstraintBroken;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ClothingSimulationFactory;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TeleportDistanceThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TeleportRotationThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t LastPoseTickFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClothingSimulationInteractor* ClothingInteractor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAnimInitialized;

	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
	void UnbindClothFromMasterPoseComponent(bool bRestoreSimulationSpace);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ToggleDisablePostProcessBlueprint();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void TermBodiesBelow(const struct FName& ParentBoneName);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SuspendClothingSimulation();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void Stop();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SnapshotPose(struct FPoseSnapshot* Snapshot);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetUpdateAnimationInEditor(bool NewUpdateState);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetTeleportRotationThreshold(float Threshold);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetTeleportDistanceThreshold(float Threshold);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetPosition(float InPos, bool bFireNotifies);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetPlayRate(float Rate);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetPhysicsBlendWeight(float PhysicsBlendWeight);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetNotifyRigidBodyCollisionBelow(bool bNewNotifyRigidBodyCollision, const struct FName& BoneName, bool bIncludeSelf);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetMorphTarget(const struct FName& MorphTargetName, float Value, bool bRemoveZeroWeight);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetEnablePhysicsBlending(bool bNewBlendPhysics);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetEnableGravityOnAllBodiesBelow(bool bEnableGravity, const struct FName& BoneName, bool bIncludeSelf);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetEnableBodyGravity(bool bEnableGravity, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetDisablePostProcessBlueprint(bool bInDisablePostProcess);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetDisableAnimCurves(bool bInDisableAnimCurves);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetConstraintProfileForAll(const struct FName& ProfileName, bool bDefaultIfNotFound);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetConstraintProfile(const struct FName& JointName, const struct FName& ProfileName, bool bDefaultIfNotFound);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetClothMaxDistanceScale(float Scale);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetBodyNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAnimationMode(TEnumAsByte<EAnimationMode> InAnimationMode);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAnimation(class UAnimationAsset* NewAnimToPlay);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAngularLimits(const struct FName& InBoneName, float Swing1LimitAngle, float TwistLimitAngle, float Swing2LimitAngle);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllowedAnimCurvesEvaluation(TArray<struct FName> List, bool bAllow);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllowAnimCurveEvaluation(bool bInAllow);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllMotorsAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllMotorsAngularPositionDrive(bool bEnableSwingDrive, bool bEnableTwistDrive, bool bSkipCustomPhysicsType);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllMotorsAngularDriveParams(float InSpring, float InDamping, float InForceLimit, bool bSkipCustomPhysicsType);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllBodiesSimulatePhysics(bool bNewSimulate);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllBodiesPhysicsBlendWeight(float PhysicsBlendWeight, bool bSkipCustomPhysicsType);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllBodiesBelowSimulatePhysics(const struct FName& InBoneName, bool bNewSimulate, bool bIncludeSelf);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void SetAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float PhysicsBlendWeight, bool bSkipCustomPhysicsType, bool bIncludeSelf);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ResumeClothingSimulation();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ResetClothTeleportMode();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ResetAnimInstanceDynamics(ETeleportType InTeleportType);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ResetAllowedAnimCurveEvaluation();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ResetAllBodiesSimulatePhysics();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void PlayAnimation(class UAnimationAsset* NewAnimToPlay, bool bLooping);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void Play(bool bLooping);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void OverrideAnimationData(class UAnimationAsset* InAnimToPlay, bool bIsLooping, bool bIsPlaying, float Position, float PlayRate);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void K2_SetAnimInstanceClass(class UClass* NewClass);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool K2_GetClosestPointOnPhysicsAsset(const struct FVector& WorldPosition, struct FVector* ClosestWorldPosition, struct FVector* Normal, struct FName* BoneName, float* Distance);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool IsPlaying();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool IsClothingSimulationSuspended();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool IsBodyGravityEnabled(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool HasValidAnimationInstance();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		float GetTeleportRotationThreshold();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		float GetTeleportDistanceThreshold();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		struct FVector GetSkeletalCenterOfMass();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		class UAnimInstance* GetPostProcessInstance();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		float GetPosition();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		float GetPlayRate();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		float GetMorphTarget(const struct FName& MorphTargetName);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool GetDisablePostProcessBlueprint();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool GetDisableAnimCurves();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void GetCurrentJointAngles(const struct FName& InBoneName, float* Swing1Angle, float* TwistAngle, float* Swing2Angle);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		float GetClothMaxDistanceScale();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		class UClothingSimulationInteractor* GetClothingSimulationInteractor();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		float GetBoneMass(const struct FName& BoneName, bool bScaleMass);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		class UAnimInstance* GetAnimInstance();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		TEnumAsByte<EAnimationMode> GetAnimationMode();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		bool GetAllowedAnimCurveEvaluate();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ForceClothNextUpdateTeleportAndReset();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ForceClothNextUpdateTeleport();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		struct FName FindConstraintBoneName(int ConstraintIndex);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void ClearMorphTargets();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void BreakConstraint(const struct FVector& Impulse, const struct FVector& HitLocation, const struct FName& InBoneName);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void BindClothToMasterPoseComponent();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void AllowAnimCurveEvaluation(const struct FName& NameOfCurve, bool bAllow);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void AddImpulseToAllBodiesBelow(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange, bool bIncludeSelf);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void AddForceToAllBodiesBelow(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange, bool bIncludeSelf);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshComponent")
		void AccumulateAllBodiesBelowPhysicsBlendWeight(const struct FName& InBoneName, float AddPhysicsBlendWeight, bool bSkipCustomPhysicsType);

};