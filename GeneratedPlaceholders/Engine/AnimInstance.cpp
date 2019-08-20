#include "AnimInstance.h"

void UAnimInstance::UnlockAIResources(bool bUnlockMovement, bool UnlockAILogic) {
}
	class APawn* UAnimInstance::TryGetPawnOwner() {
}
	void UAnimInstance::StopSlotAnimation(float InBlendOutTime, const struct FName& SlotNodeName) {
}
	void UAnimInstance::SnapshotPose(struct FPoseSnapshot* Snapshot) {
}
	void UAnimInstance::SetRootMotionMode(TEnumAsByte<ERootMotionMode> Value) {
}
	void UAnimInstance::SetMorphTarget(const struct FName& MorphTargetName, float Value) {
}
	void UAnimInstance::SavePoseSnapshot(const struct FName& SnapshotName) {
}
	void UAnimInstance::ResetDynamics(ETeleportType InTeleportType) {
}
	class UAnimMontage* UAnimInstance::PlaySlotAnimationAsDynamicMontage(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount, float BlendOutTriggerTime, float InTimeToStartMontageAt) {
}
	float UAnimInstance::PlaySlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName, float BlendInTime, float BlendOutTime, float InPlayRate, int LoopCount) {
}
	void UAnimInstance::Montage_Stop(float InBlendOutTime, class UAnimMontage* Montage) {
}
	void UAnimInstance::Montage_SetPosition(class UAnimMontage* Montage, float NewPosition) {
}
	void UAnimInstance::Montage_SetPlayRate(class UAnimMontage* Montage, float NewPlayRate) {
}
	void UAnimInstance::Montage_SetNextSection(const struct FName& SectionNameToChange, const struct FName& NextSection, class UAnimMontage* Montage) {
}
	void UAnimInstance::Montage_Resume(class UAnimMontage* Montage) {
}
	float UAnimInstance::Montage_Play(class UAnimMontage* MontageToPlay, float InPlayRate, EMontagePlayReturnType ReturnValueType, float InTimeToStartMontageAt, bool bStopAllMontages) {
}
	void UAnimInstance::Montage_Pause(class UAnimMontage* Montage) {
}
	void UAnimInstance::Montage_JumpToSectionsEnd(const struct FName& SectionName, class UAnimMontage* Montage) {
}
	void UAnimInstance::Montage_JumpToSection(const struct FName& SectionName, class UAnimMontage* Montage) {
}
	bool UAnimInstance::Montage_IsPlaying(class UAnimMontage* Montage) {
}
	bool UAnimInstance::Montage_IsActive(class UAnimMontage* Montage) {
}
	float UAnimInstance::Montage_GetPosition(class UAnimMontage* Montage) {
}
	float UAnimInstance::Montage_GetPlayRate(class UAnimMontage* Montage) {
}
	bool UAnimInstance::Montage_GetIsStopped(class UAnimMontage* Montage) {
}
	struct FName UAnimInstance::Montage_GetCurrentSection(class UAnimMontage* Montage) {
}
	float UAnimInstance::Montage_GetBlendTime(class UAnimMontage* Montage) {
}
	void UAnimInstance::LockAIResources(bool bLockMovement, bool LockAILogic) {
}
	bool UAnimInstance::IsSyncGroupBetweenMarkers(const struct FName& InSyncGroupName, const struct FName& PreviousMarker, const struct FName& NextMarker, bool bRespectMarkerOrder) {
}
	bool UAnimInstance::IsPlayingSlotAnimation(class UAnimSequenceBase* Asset, const struct FName& SlotNodeName) {
}
	bool UAnimInstance::IsAnyMontagePlaying() {
}
	bool UAnimInstance::HasMarkerBeenHitThisFrame(const struct FName& SyncGroup, const struct FName& MarkerName) {
}
	bool UAnimInstance::GetTimeToClosestMarker(const struct FName& SyncGroup, const struct FName& MarkerName, float* OutMarkerTime) {
}
	struct FMarkerSyncAnimPosition UAnimInstance::GetSyncGroupPosition(const struct FName& InSyncGroupName) {
}
	float UAnimInstance::GetRelevantAnimTimeRemainingFraction(int MachineIndex, int StateIndex) {
}
	float UAnimInstance::GetRelevantAnimTimeRemaining(int MachineIndex, int StateIndex) {
}
	float UAnimInstance::GetRelevantAnimTimeFraction(int MachineIndex, int StateIndex) {
}
	float UAnimInstance::GetRelevantAnimTime(int MachineIndex, int StateIndex) {
}
	float UAnimInstance::GetRelevantAnimLength(int MachineIndex, int StateIndex) {
}
	class USkeletalMeshComponent* UAnimInstance::GetOwningComponent() {
}
	class AActor* UAnimInstance::GetOwningActor() {
}
	float UAnimInstance::GetInstanceTransitionTimeElapsedFraction(int MachineIndex, int TransitionIndex) {
}
	float UAnimInstance::GetInstanceTransitionTimeElapsed(int MachineIndex, int TransitionIndex) {
}
	float UAnimInstance::GetInstanceTransitionCrossfadeDuration(int MachineIndex, int TransitionIndex) {
}
	float UAnimInstance::GetInstanceStateWeight(int MachineIndex, int StateIndex) {
}
	float UAnimInstance::GetInstanceMachineWeight(int MachineIndex) {
}
	float UAnimInstance::GetInstanceCurrentStateElapsedTime(int MachineIndex) {
}
	float UAnimInstance::GetInstanceAssetPlayerTimeFromEndFraction(int AssetPlayerIndex) {
}
	float UAnimInstance::GetInstanceAssetPlayerTimeFromEnd(int AssetPlayerIndex) {
}
	float UAnimInstance::GetInstanceAssetPlayerTimeFraction(int AssetPlayerIndex) {
}
	float UAnimInstance::GetInstanceAssetPlayerTime(int AssetPlayerIndex) {
}
	float UAnimInstance::GetInstanceAssetPlayerLength(int AssetPlayerIndex) {
}
	float UAnimInstance::GetCurveValue(const struct FName& CurveName) {
}
	struct FName UAnimInstance::GetCurrentStateName(int MachineIndex) {
}
	class UAnimMontage* UAnimInstance::GetCurrentActiveMontage() {
}
	void UAnimInstance::GetAllCurveNames(TArray<struct FName>* OutNames) {
}
	void UAnimInstance::GetActiveCurveNames(EAnimCurveType CurveType, TArray<struct FName>* OutNames) {
}
	void UAnimInstance::ClearMorphTargets() {
}
	float UAnimInstance::CalculateDirection(const struct FVector& Velocity, const struct FRotator& BaseRotation) {
}
	void UAnimInstance::BlueprintUpdateAnimation(float DeltaTimeX) {
}
	void UAnimInstance::BlueprintPostEvaluateAnimation() {
}
	void UAnimInstance::BlueprintInitializeAnimation() {
}
	void UAnimInstance::BlueprintBeginPlay() {
}
