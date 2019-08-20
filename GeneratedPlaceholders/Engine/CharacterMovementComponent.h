#pragma once

#include "CoreMinimal.h"
#include "CharacterMovementComponent.generated.h"

UCLASS()
class UCharacterMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ACharacter* CharacterOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyGravityWhileJumping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GravityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxStepHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpZVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpOffJumpZFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WalkableFloorAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WalkableFloorZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMovementMode> MovementMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CustomMovementMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GroundFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxWalkSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxWalkSpeedCrouched;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSwimSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxFlySpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxCustomMovementSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAcceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinAnalogWalkSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakingFrictionFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakingFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseSeparateBrakingFriction : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakingDecelerationWalking;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakingDecelerationFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakingDecelerationSwimming;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BrakingDecelerationFlying;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AirControl;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AirControlBoostMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AirControlBoostVelocityThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FallingLateralFriction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CrouchedHalfHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Buoyancy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PerchRadiusThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PerchAdditionalHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RotationRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseControllerDesiredRotation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOrientRotationToMovement : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSweepWhileNavWalking : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData04 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMovementInProgress : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableScopedMovementUpdates : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceMaxAccel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRunPhysicsWithNoController : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceNextFloorCheck : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShrinkProxyCapsule : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanWalkOffLedges : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanWalkOffLedgesWhenCrouching : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData05 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetworkSkipProxyPredictionOnNetUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDeferUpdateMoveComponent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* DeferredUpdatedMoveComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxOutOfWaterStepHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OutofWaterZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Mass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnablePhysicsInteraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTouchForceScaledToMass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPushForceScaledToMass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPushForceUsingZOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bScalePushForceToVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StandingDownwardForceScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialPushForceFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PushForceFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PushForcePointZOffsetFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TouchForceFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinTouchForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxTouchForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RepulsionForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceBraking : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CrouchedSpeedMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UpperImpactNormalScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Acceleration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastUpdateLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQuat LastUpdateRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastUpdateVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ServerLastTransformUpdateTimeStamp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ServerLastClientGoodMoveAckTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ServerLastClientAdjustmentTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PendingImpulseToApply;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PendingForceToApply;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnalogInputModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSimulationTimeStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSimulationIterations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDepenetrationWithGeometry;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDepenetrationWithGeometryAsProxy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDepenetrationWithPawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDepenetrationWithPawnAsProxy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkSimulatedSmoothLocationTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkSimulatedSmoothRotationTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ListenServerNetworkSimulatedSmoothLocationTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ListenServerNetworkSimulatedSmoothRotationTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetProxyShrinkRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetProxyShrinkHalfHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkMaxSmoothUpdateDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkNoSmoothUpdateDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ENetworkSmoothingMode NetworkSmoothingMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkMinTimeBetweenClientAckGoodMoves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkMinTimeBetweenClientAdjustments;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetworkLargeClientCorrectionDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LedgeCheckThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpOutOfWaterPitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFindFloorResult CurrentFloor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMovementMode> DefaultLandMovementMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMovementMode> DefaultWaterMovementMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMovementMode> GroundMovementMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMaintainHorizontalGroundVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bImpartBaseVelocityX : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bImpartBaseVelocityY : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bImpartBaseVelocityZ : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bImpartBaseAngularVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bJustTeleported : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetworkUpdateReceived : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetworkMovementModeChanged : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreClientMovementErrorChecksAndCorrection : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNotifyApex : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCheatFlying : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWantsToCrouch : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCrouchMaintainsBaseLocation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreBaseRotation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFastAttachedMove : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysCheckFloor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFlatBaseForFloorChecks : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPerformingJumpOff : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWantsToLeaveNavWalking : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseRVOAvoidance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRequestedMoveUseAcceleration : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData12 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasRequestedVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRequestedMoveWithMaxSpeed : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWasAvoidanceUpdated : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData13 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProjectNavMeshWalking : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProjectNavMeshOnBothWorldChannels : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AvoidanceConsiderationRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RequestedVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AvoidanceUID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask AvoidanceGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask GroupsToAvoid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAvoidanceMask GroupsToIgnore;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AvoidanceWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PendingLaunchVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavMeshProjectionInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavMeshProjectionTimer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavMeshProjectionInterpSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavMeshProjectionHeightScaleUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavMeshProjectionHeightScaleDown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavWalkingFloorDistTolerance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinTimeBetweenTimeStampResets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRootMotionSourceGroup CurrentRootMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRootMotionMovementParams RootMotionParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector AnimRootMotionVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasSimulatingRootMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowPhysicsRotationDuringAnimRootMotion : 1;

	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
	void SetWalkableFloorZ(float InWalkableFloorZ);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetWalkableFloorAngle(float InWalkableFloorAngle);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, unsigned char NewCustomMode);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetGroupsToIgnoreMask(const struct FNavAvoidanceMask& GroupMask);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetGroupsToIgnore(int GroupFlags);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetGroupsToAvoidMask(const struct FNavAvoidanceMask& GroupMask);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetGroupsToAvoid(int GroupFlags);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetAvoidanceGroupMask(const struct FNavAvoidanceMask& GroupMask);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetAvoidanceGroup(int GroupFlags);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void SetAvoidanceEnabled(bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float K2_GetWalkableFloorZ();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float K2_GetWalkableFloorAngle();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float K2_GetModifiedMaxAcceleration();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void K2_FindFloor(const struct FVector& CapsuleLocation, struct FFindFloorResult* FloorResult);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void K2_ComputeFloorDist(const struct FVector& CapsuleLocation, float LineDistance, float SweepDistance, float SweepRadius, struct FFindFloorResult* FloorResult);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		bool IsWalking();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		bool IsWalkable(const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetValidPerchRadius();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetPerchRadiusThreshold();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		class UPrimitiveComponent* GetMovementBase();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetMinAnalogSpeed();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetMaxJumpHeightWithJumpTime();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetMaxJumpHeight();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetMaxBrakingDeceleration();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetMaxAcceleration();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		struct FVector GetImpartedMovementBaseVelocity();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		struct FVector GetCurrentAcceleration();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		class ACharacter* GetCharacterOwner();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		float GetAnalogInputModifier();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void DisableMovement();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void ClearAccumulatedForces();
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void CapsuleTouched(class UPrimitiveComponent* OverlappedComp, class AActor* Other, class UPrimitiveComponent* OtherComp, int OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void AddImpulse(const struct FVector& Impulse, bool bVelocityChange);
	UFUNCTION(BlueprintCallable, Category = "CharacterMovementComponent")
		void AddForce(const struct FVector& Force);

};