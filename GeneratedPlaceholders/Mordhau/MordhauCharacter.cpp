#include "MordhauCharacter.h"

bool AMordhauCharacter::ValidateInteractionTarget(class AActor* TargetActor) {
}
	void AMordhauCharacter::UseReleased() {
}
	void AMordhauCharacter::UsePressed() {
}
	void AMordhauCharacter::UpdateWearableInstanceColorsAndPatterns() {
}
	void AMordhauCharacter::UpdateQuiverMesh() {
}
	void AMordhauCharacter::UpdateLOD(float DeltaTime) {
}
	void AMordhauCharacter::UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset) {
}
	void AMordhauCharacter::UpdateAllSkeletalMeshComponentMaterials() {
}
	bool AMordhauCharacter::TryDismember(const struct FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, EAttackMove Move, bool bIsRagdollDismember) {
}
	bool AMordhauCharacter::TryClimbing() {
}
	void AMordhauCharacter::SwitchToFists() {
}
	void AMordhauCharacter::SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch) {
}
	void AMordhauCharacter::SwitchEquipmentByIndex(unsigned char Index) {
}
	void AMordhauCharacter::SwitchEquipment(class AMordhauEquipment* ToSwitch) {
}
	void AMordhauCharacter::StopSupersprint() {
}
	void AMordhauCharacter::StopStaminaRegen(float ExtraTime) {
}
	void AMordhauCharacter::StopSprinting() {
}
	void AMordhauCharacter::StopMontage(class UAnimMontage* Montage, float FadeOut) {
}
	void AMordhauCharacter::StopListenForStrike360() {
}
	void AMordhauCharacter::StopListenForStab360() {
}
	void AMordhauCharacter::StopCurrentVoiceCommand() {
}
	void AMordhauCharacter::StopCrouching() {
}
	void AMordhauCharacter::StopAttackYell() {
}
	void AMordhauCharacter::StopAnim(float FadeOut) {
}
	void AMordhauCharacter::StartSupersprint() {
}
	void AMordhauCharacter::StartSprinting() {
}
	void AMordhauCharacter::StartCrouching() {
}
	void AMordhauCharacter::SprintReleased() {
}
	void AMordhauCharacter::SprintPressed() {
}
	void AMordhauCharacter::ShowEquipmentIfViewTarget() {
}
	void AMordhauCharacter::SetQuiver(class UClass* NewQuiver) {
}
	void AMordhauCharacter::SetMaxAnimBlendWeight(float MaxAmount, class UAnimMontage** Montage) {
}
	void AMordhauCharacter::SetMaterialParamsForMergedSlot(const struct FString& Prefix, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid) {
}
	void AMordhauCharacter::SetMaterialParamsForLODMasterSlot(const struct FString& Slot, class UMordhauWearable* Wearable, class UMaterialInstanceDynamic* Mid) {
}
	void AMordhauCharacter::SetFaceCustomizationTranslate(const struct FName& BoneName, const struct FVector& Vector) {
}
	void AMordhauCharacter::SetFaceCustomizationScale(const struct FName& BoneName, const struct FVector& Vector) {
}
	void AMordhauCharacter::SetFaceCustomizationRotate(const struct FName& BoneName, const struct FVector& Vector) {
}
	void AMordhauCharacter::SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA) {
}
	void AMordhauCharacter::SetCurrentlyTracking(class AActor* NewTrackingTarget) {
}
	void AMordhauCharacter::SetCameraStyle(unsigned char NewStyle, bool bBlendCamera) {
}
	void AMordhauCharacter::SetAnimRate(class UAnimMontage* Montage, float NewRate) {
}
	void AMordhauCharacter::SetAnimPosition(class UAnimMontage* Montage, float NewPosition) {
}
	void AMordhauCharacter::ServerSuggestHitDetection(class AAdvancedCharacter* OtherCharacter, const struct FVector_NetQuantize& HitLocation, unsigned char BoneId) {
}
	void AMordhauCharacter::ServerSetInteractionTarget(class AActor* Target) {
}
	void AMordhauCharacter::ServerRequestVoiceCommand(unsigned char VoiceRequest) {
}
	void AMordhauCharacter::ServerRequestPing() {
}
	void AMordhauCharacter::ServerRequestPassiveInteraction(class AActor* Target) {
}
	void AMordhauCharacter::ServerRequestDodge(unsigned char PackedWorldYaw) {
}
	void AMordhauCharacter::ServerQueueAttack(EAttackMove Move, unsigned char Angle, unsigned char MotionID) {
}
	void AMordhauCharacter::ServerDropParry(unsigned char MotionID) {
}
	void AMordhauCharacter::ServerAssignNetMotion(const struct FNetMotion& NewNetMotion, unsigned char LastAuthObserved) {
}
	void AMordhauCharacter::ServerAssignFireAim(const struct FVector& Orig, const struct FRotator& Rot) {
}
	void AMordhauCharacter::ReweightSkinning(int BoneFrom, int BoneTo, bool bIncludeChildren, const struct FVector& ExceptNearThisPoint, float Radius, const struct FName& NearPointBone) {
}
	TArray<class AMordhauEquipment*> AMordhauCharacter::RestockDefaultEquipment(int MaxSlotsToRestock) {
}
	void AMordhauCharacter::RequestVoiceCommand(unsigned char CommandType, bool bAllowQueue) {
}
	void AMordhauCharacter::RequestUse() {
}
	void AMordhauCharacter::RequestToggleWeaponMode() {
}
	void AMordhauCharacter::RequestStrike360() {
}
	void AMordhauCharacter::RequestStab360() {
}
	void AMordhauCharacter::RequestRightUpperStrike() {
}
	void AMordhauCharacter::RequestRightStrike() {
}
	void AMordhauCharacter::RequestRightStab() {
}
	void AMordhauCharacter::RequestRightLowerStrike() {
}
	void AMordhauCharacter::RequestRangedCancel() {
}
	bool AMordhauCharacter::RequestParry(EBlockType BlockType, bool bAllowFTP) {
}
	void AMordhauCharacter::RequestLeftUpperStrike() {
}
	void AMordhauCharacter::RequestLeftStrike() {
}
	void AMordhauCharacter::RequestLeftStab() {
}
	void AMordhauCharacter::RequestLeftLowerStrike() {
}
	void AMordhauCharacter::RequestKick() {
}
	void AMordhauCharacter::RequestJump() {
}
	void AMordhauCharacter::RequestHolster(unsigned char Mode) {
}
	void AMordhauCharacter::RequestFire() {
}
	void AMordhauCharacter::RequestFeint() {
}
	void AMordhauCharacter::RequestEmote(unsigned char EmoteId) {
}
	void AMordhauCharacter::RequestDrop() {
}
	void AMordhauCharacter::RequestCouchedAttack() {
}
	void AMordhauCharacter::RequestClimb(const struct FVector& TargetLocation) {
}
	void AMordhauCharacter::RequestBash() {
}
	void AMordhauCharacter::RequestAttack(EAttackMove Move, float Angle) {
}
	void AMordhauCharacter::ReplicateStamina() {
}
	bool AMordhauCharacter::QueueDismember(const struct FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent) {
}
	class UAudioComponent* AMordhauCharacter::PlaySnappyArmorFoley() {
}
	class UAudioComponent* AMordhauCharacter::PlayNonSnappyArmorFoley() {
}
	class UAudioComponent* AMordhauCharacter::PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier) {
}
	void AMordhauCharacter::PlayHurtYell() {
}
	void AMordhauCharacter::PlayDeathYell(bool bIsLongYell) {
}
	void AMordhauCharacter::PlayAttackYell() {
}
	class UAnimMontage* AMordhauCharacter::PlayAnim(class UAnimMontage* Montage, float PlayRate, bool bStopExistingMontages) {
}
	bool AMordhauCharacter::PickUpToSlot(class AMordhauEquipment* ToEquip, unsigned char Slot) {
}
	bool AMordhauCharacter::PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot) {
}
	void AMordhauCharacter::PerformVoiceCommand(unsigned char PackedVoiceCommand) {
}
	void AMordhauCharacter::OnRep_RightHandEquipment() {
}
	void AMordhauCharacter::OnRep_ReplicatedVoiceCommand() {
}
	void AMordhauCharacter::OnRep_ReplicatedStamina() {
}
	void AMordhauCharacter::OnRep_ReplicatedNetMotion() {
}
	void AMordhauCharacter::OnRep_ReplicatedDodge() {
}
	void AMordhauCharacter::OnRep_ReplicatedCustomizationReplicationActor() {
}
	void AMordhauCharacter::OnRep_Quiver() {
}
	void AMordhauCharacter::OnRep_NetBlock() {
}
	void AMordhauCharacter::OnRep_LeftHandEquipment() {
}
	void AMordhauCharacter::OnRep_Equipment() {
}
	void AMordhauCharacter::OnPostProfileAssigned() {
}
	void AMordhauCharacter::OnPostDismember(const struct FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent) {
}
	void AMordhauCharacter::OnActionFailed(const struct FName& Reason) {
}
	void AMordhauCharacter::OffsetStamina(int Amount, bool bReplicate) {
}
	void AMordhauCharacter::MoveBlockedBySlow(const struct FHitResult& Impact) {
}
	void AMordhauCharacter::ListenForStrike360() {
}
	void AMordhauCharacter::ListenForStab360() {
}
	void AMordhauCharacter::LeftTeamArea(int OwningTeam) {
}
	void AMordhauCharacter::JumpReleased() {
}
	void AMordhauCharacter::JumpPressed() {
}
	bool AMordhauCharacter::IsViewTarget() {
}
	bool AMordhauCharacter::STATIC_IsRightLeg(const struct FName& bone) {
}
	bool AMordhauCharacter::STATIC_IsRightArm(const struct FName& bone) {
}
	bool AMordhauCharacter::IsPlayerControlledIncludingVehicle() {
}
	bool AMordhauCharacter::IsLocallyPlayerControlledIncludingVehicle() {
}
	bool AMordhauCharacter::IsLocallyControlledIncludingVehicle() {
}
	bool AMordhauCharacter::STATIC_IsLeg(const struct FName& bone) {
}
	bool AMordhauCharacter::STATIC_IsLeftLeg(const struct FName& bone) {
}
	bool AMordhauCharacter::STATIC_IsLeftArm(const struct FName& bone) {
}
	bool AMordhauCharacter::IsInKnockback() {
}
	bool AMordhauCharacter::IsInEnemyTeamArea() {
}
	bool AMordhauCharacter::IsInAnyTeamArea() {
}
	bool AMordhauCharacter::IsHoldingBlock() {
}
	bool AMordhauCharacter::STATIC_IsHead(const struct FName& bone) {
}
	bool AMordhauCharacter::IsBoneDismembered(const struct FName& bone) {
}
	bool AMordhauCharacter::STATIC_IsArm(const struct FName& bone) {
}
	bool AMordhauCharacter::IsAnimActive(class UAnimMontage* Montage) {
}
	void AMordhauCharacter::Holster(class AMordhauEquipment* ToHolster) {
}
	bool AMordhauCharacter::HasPerk(unsigned char PerkId) {
}
	bool AMordhauCharacter::HasEquipmentHeSpawnedWith() {
}
	EMovementRestriction AMordhauCharacter::GetMovementRestriction() {
}
	class UAudioComponent* AMordhauCharacter::GetLastVoiceCommand() {
}
	class AMordhauVehicle* AMordhauCharacter::GetLastUsedVehicle(float MaximumTimeDiscrepancy) {
}
	class AActor* AMordhauCharacter::GetLastMovementFrontalHitActor(float MaxAgeSeconds) {
}
	struct FVector AMordhauCharacter::GetFaceCustomizationTranslate(const struct FName& BoneName) {
}
	struct FTransform AMordhauCharacter::GetFaceCustomizationTransform(const struct FName& BoneName) {
}
	struct FVector AMordhauCharacter::GetFaceCustomizationScale(const struct FName& BoneName) {
}
	struct FVector AMordhauCharacter::GetFaceCustomizationRotate(const struct FName& BoneName) {
}
	int AMordhauCharacter::GetFaceCustomizationBoneIdx(const struct FName& BoneName) {
}
	bool AMordhauCharacter::GetEquipmentIndex(class AMordhauEquipment* Equip, unsigned char* OutIndex) {
}
	class ACustomizationReplicationActor* AMordhauCharacter::GetCustomizationReplicationActor() {
}
	class AController* AMordhauCharacter::GetControllerIncludingVehicle() {
}
	class ULODSkeletalMeshComponent* AMordhauCharacter::GetClothMesh() {
}
	float AMordhauCharacter::GetAnimWeight(class UAnimMontage* Montage) {
}
	TArray<struct FName> AMordhauCharacter::GetAllFaceSelectionChildBonesRecursive(const struct FName& ParentBone) {
}
	void AMordhauCharacter::FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator) {
}
	void AMordhauCharacter::ForceUpdateMeshVisibility() {
}
	void AMordhauCharacter::FlipAttackSideReleased() {
}
	void AMordhauCharacter::FlipAttackSidePressed() {
}
	void AMordhauCharacter::FireReleased() {
}
	void AMordhauCharacter::FirePressed() {
}
	class AMordhauEquipment* AMordhauCharacter::FindEquipmentToRestock(TArray<class UClass*> ValidEquipment) {
}
	class AController* AMordhauCharacter::FindBestKiller(float CutOffTime) {
}
	void AMordhauCharacter::FeintOrBlockReleased() {
}
	void AMordhauCharacter::FeintOrBlockPressed() {
}
	void AMordhauCharacter::EquipSlot9() {
}
	void AMordhauCharacter::EquipSlot8() {
}
	void AMordhauCharacter::EquipSlot7() {
}
	void AMordhauCharacter::EquipSlot6() {
}
	void AMordhauCharacter::EquipSlot5() {
}
	void AMordhauCharacter::EquipSlot4() {
}
	void AMordhauCharacter::EquipSlot3() {
}
	void AMordhauCharacter::EquipSlot2() {
}
	void AMordhauCharacter::EquipSlot1() {
}
	bool AMordhauCharacter::EquipSlot(unsigned char Index, bool bDisplayEquipmentList) {
}
	void AMordhauCharacter::EnteredTeamArea(int OwningTeam) {
}
	void AMordhauCharacter::EnableBlockCollider() {
}
	void AMordhauCharacter::EmptyHands() {
}
	void AMordhauCharacter::DropSlot(unsigned char Index) {
}
	void AMordhauCharacter::DropEquipment(class AMordhauEquipment* ToDrop) {
}
	void AMordhauCharacter::DoCameraShakeIfViewTarget(class UClass* Shake, float Scale, TEnumAsByte<ECameraAnimPlaySpace> PlaySpace, const struct FRotator& UserPlaySpaceRot, bool bAllowSettingsScale) {
}
	class ASeparatedBodyPart* AMordhauCharacter::Dismember(const struct FName& bone) {
}
	void AMordhauCharacter::DisableLimb(const struct FName& BoneName) {
}
	void AMordhauCharacter::DisableBlockCollider() {
}
	void AMordhauCharacter::CycleCamera() {
}
	struct FRotator AMordhauCharacter::ComputeFPRotation(const struct FRotator& Offset, float InLookUpValue) {
}
	struct FVector AMordhauCharacter::ComputeFPLocation(const struct FRotator& Offset, float InLookUpValue) {
}
	struct FVector AMordhauCharacter::ComputeFPCosmeticLocationOffset(const struct FRotator& Rotation, struct FVector* OutFOVOffset, struct FVector* OutZoomOffset) {
}
	void AMordhauCharacter::ClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime) {
}
	void AMordhauCharacter::ClientPong() {
}
	bool AMordhauCharacter::CheckCanEquipAlt(class AMordhauEquipment* Equip) {
}
	bool AMordhauCharacter::CheckCanEquip(class AMordhauEquipment* Equip) {
}
	void AMordhauCharacter::ChangeMotion(class UMordhauMotion* NewMotion, bool bSkipDeltaTimeForward) {
}
	bool AMordhauCharacter::CanPerformAttack(EAttackMove Move) {
}
	bool AMordhauCharacter::CanInitiateMotion(class UClass* NewMotion, bool bAttemptCancel) {
}
	bool AMordhauCharacter::CanEasyParry() {
}
	bool AMordhauCharacter::CanDismember(const struct FName& bone) {
}
	bool AMordhauCharacter::CanAccomodate(class UClass* EquipmentToTest) {
}
	void AMordhauCharacter::CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector* OutOffset, struct FVector* OutNormal) {
}
	class UAudioComponent* AMordhauCharacter::BP_PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& Location, TEnumAsByte<EAttachLocation> AttachLocation, bool bAttach) {
}
	void AMordhauCharacter::BoostAnimBlendWeight(float BoostAmount, class UAnimMontage** Montage) {
}
	void AMordhauCharacter::BlockReleased() {
}
	void AMordhauCharacter::BlockPressed() {
}
	void AMordhauCharacter::BakeFaceCustomizationTransforms(bool bDeferBake) {
}
	void AMordhauCharacter::AssignProfile(const struct FCharacterProfile& NewProfile) {
}
	void AMordhauCharacter::AssignNetMotionSimple(unsigned char MotionType, unsigned char Param0, unsigned char Param1, unsigned char Param2) {
}
	void AMordhauCharacter::AssignNetBlock(EBlockedReason BlockedReason, unsigned char BlockType, EAttackMove BlockedMove, unsigned char BlockedAngle, class AActor* Weapon) {
}
