#pragma once

#include "CoreMinimal.h"
#include "Character.generated.h"

UCLASS()
class ACharacter : public APawn
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* Mesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCharacterMovementComponent* CharacterMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBasedMovementInfo BasedMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBasedMovementInfo ReplicatedBasedMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AnimRootMotionTranslationScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector BaseTranslationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQuat BaseRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReplicatedServerLastTransformUpdateTimeStamp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReplicatedMovementMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInBaseReplication;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CrouchedEyeHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsCrouched : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProxyIsJumpForceApplied : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPressedJump : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClientUpdating : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClientWasFalling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClientResimulateRootMotion : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClientResimulateRootMotionSources : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSimGravityDisabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClientCheckEncroachmentOnNetUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bServerMoveIgnoreRootMotion : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWasJumping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpKeyHoldTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpForceTimeRemaining;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProxyJumpForceStartedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float JumpMaxHoldTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int JumpMaxCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int JumpCurrentCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnReachedJumpApex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate MovementModeChangedDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnCharacterMovementUpdated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRootMotionSourceGroup SavedRootMotion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRootMotionMovementParams ClientRootMotionParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSimulatedRootMotionReplicatedMove> RootMotionRepMoves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepRootMotionMontage RepRootMotion;

	UFUNCTION(BlueprintCallable, Category = "Character")
	void UnCrouch(bool bClientSimulation);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void StopJumping();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void StopAnimMontage(class UAnimMontage* AnimMontage);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ServerMoveNoBase(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ServerMoveDualNoBase(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ServerMove(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void RootMotionDebugClientPrintOnScreen(const struct FString& inString);
	UFUNCTION(BlueprintCallable, Category = "Character")
		float PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void OnRep_RootMotion();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void OnRep_ReplicatedBasedMovement();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void OnRep_IsCrouched();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void OnLanded(const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void OnJumped();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void K2_UpdateCustomMovement(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void Jump();
	UFUNCTION(BlueprintCallable, Category = "Character")
		bool IsPlayingRootMotion();
	UFUNCTION(BlueprintCallable, Category = "Character")
		bool IsPlayingNetworkedRootMotionMontage();
	UFUNCTION(BlueprintCallable, Category = "Character")
		bool IsJumpProvidingForce();
	UFUNCTION(BlueprintCallable, Category = "Character")
		class UAnimMontage* GetCurrentMontage();
	UFUNCTION(BlueprintCallable, Category = "Character")
		struct FVector GetBaseTranslationOffset();
	UFUNCTION(BlueprintCallable, Category = "Character")
		struct FRotator GetBaseRotationOffsetRotator();
	UFUNCTION(BlueprintCallable, Category = "Character")
		float GetAnimRootMotionTranslationScale();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void Crouch(bool bClientSimulation);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientVeryShortAdjustPosition(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientCheatWalk();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientCheatGhost();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientCheatFly();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientAdjustRootMotionSourcePosition(float Timestamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientAdjustPosition(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode);
	UFUNCTION(BlueprintCallable, Category = "Character")
		void ClientAckGoodMove(float Timestamp);
	UFUNCTION(BlueprintCallable, Category = "Character")
		bool CanJumpInternal();
	UFUNCTION(BlueprintCallable, Category = "Character")
		bool CanJump();
	UFUNCTION(BlueprintCallable, Category = "Character")
		void CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation);

};