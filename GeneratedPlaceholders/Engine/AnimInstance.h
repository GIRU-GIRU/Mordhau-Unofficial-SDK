#pragma once

#include "CoreMinimal.h"
#include "AnimInstance.generated.h"

UCLASS()
class UAnimInstance : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* CurrentSkeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERootMotionMode> RootMotionMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseMultiThreadedAnimationUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsingCopyPoseFromMesh : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bQueueMontageEvents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMontageBlendingOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMontageStarted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnMontageEnded;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAllMontageInstancesEnded;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAnimNotifyQueue NotifyQueue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimNotifyEvent> ActiveAnimNotifyState;

	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
	void UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		class APawn* TryGetPawnOwner();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void StopSlotAnimation(float InBlendOutTime, const struct FName& SlotNodeName);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void SnapshotPose(struct FPoseSnapshot* Snapshot);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void SetMorphTarget(const struct FName& MorphTargetName, float Value);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void SavePoseSnapshot(const struct FName& SnapshotName);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void ResetDynamics(ETeleportType InTeleportType);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		class UAnimMontage* PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_SetPosition(class UAnimMontage* Montage, float NewPosition);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_Resume(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_Pause(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool Montage_IsPlaying(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool Montage_IsActive(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float Montage_GetPosition(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float Montage_GetPlayRate(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool Montage_GetIsStopped(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		struct FName Montage_GetCurrentSection(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float Montage_GetBlendTime(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void LockAIResources(bool bLockMovement, bool LockAILogic);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool IsAnyMontagePlaying();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		bool GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		struct FMarkerSyncAnimPosition GetSyncGroupPosition(const struct FName& InSyncGroupName);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetRelevantAnimTime(int MachineIndex, int StateIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetRelevantAnimLength(int MachineIndex, int StateIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		class USkeletalMeshComponent* GetOwningComponent();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		class AActor* GetOwningActor();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceStateWeight(int MachineIndex, int StateIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceMachineWeight(int MachineIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceCurrentStateElapsedTime(int MachineIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceAssetPlayerTime(int AssetPlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetInstanceAssetPlayerLength(int AssetPlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float GetCurveValue(const struct FName& CurveName);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		struct FName GetCurrentStateName(int MachineIndex);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		class UAnimMontage* GetCurrentActiveMontage();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void GetAllCurveNames(TArray<struct FName>* OutNames);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void GetActiveCurveNames(EAnimCurveType CurveType, TArray<struct FName>* OutNames);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void ClearMorphTargets();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		float CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void BlueprintUpdateAnimation(float DeltaTimeX);
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void BlueprintPostEvaluateAnimation();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void BlueprintInitializeAnimation();
	UFUNCTION(BlueprintCallable, Category = "AnimInstance")
		void BlueprintBeginPlay();

};