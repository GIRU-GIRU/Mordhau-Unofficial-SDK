#include "Character.h"

void ACharacter::UnCrouch(bool bClientSimulation) {
}
	void ACharacter::StopJumping() {
}
	void ACharacter::StopAnimMontage(class UAnimMontage* AnimMontage) {
}
	void ACharacter::ServerMoveOld(float OldTimeStamp, const struct FVector_NetQuantize10& OldAccel, unsigned char OldMoveFlags) {
}
	void ACharacter::ServerMoveNoBase(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode) {
}
	void ACharacter::ServerMoveDualNoBase(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, unsigned char ClientMovementMode) {
}
	void ACharacter::ServerMoveDualHybridRootMotion(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode) {
}
	void ACharacter::ServerMoveDual(float TimeStamp0, const struct FVector_NetQuantize10& InAccel0, unsigned char PendingFlags, uint32_t View0, float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char NewFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode) {
}
	void ACharacter::ServerMove(float Timestamp, const struct FVector_NetQuantize10& InAccel, const struct FVector_NetQuantize100& ClientLoc, unsigned char CompressedMoveFlags, unsigned char ClientRoll, uint32_t View, class UPrimitiveComponent* ClientMovementBase, const struct FName& ClientBaseBoneName, unsigned char ClientMovementMode) {
}
	void ACharacter::RootMotionDebugClientPrintOnScreen(const struct FString& inString) {
}
	float ACharacter::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, const struct FName& StartSectionName) {
}
	void ACharacter::OnWalkingOffLedge(const struct FVector& PreviousFloorImpactNormal, const struct FVector& PreviousFloorContactNormal, const struct FVector& PreviousLocation, float TimeDelta) {
}
	void ACharacter::OnRep_RootMotion() {
}
	void ACharacter::OnRep_ReplicatedBasedMovement() {
}
	void ACharacter::OnRep_IsCrouched() {
}
	void ACharacter::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride) {
}
	void ACharacter::OnLanded(const struct FHitResult& Hit) {
}
	void ACharacter::OnJumped() {
}
	void ACharacter::LaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride) {
}
	void ACharacter::K2_UpdateCustomMovement(float DeltaTime) {
}
	void ACharacter::K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
}
	void ACharacter::K2_OnMovementModeChanged(TEnumAsByte<EMovementMode> PrevMovementMode, TEnumAsByte<EMovementMode> NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode) {
}
	void ACharacter::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) {
}
	void ACharacter::Jump() {
}
	bool ACharacter::IsPlayingRootMotion() {
}
	bool ACharacter::IsPlayingNetworkedRootMotionMontage() {
}
	bool ACharacter::IsJumpProvidingForce() {
}
	class UAnimMontage* ACharacter::GetCurrentMontage() {
}
	struct FVector ACharacter::GetBaseTranslationOffset() {
}
	struct FRotator ACharacter::GetBaseRotationOffsetRotator() {
}
	float ACharacter::GetAnimRootMotionTranslationScale() {
}
	void ACharacter::Crouch(bool bClientSimulation) {
}
	void ACharacter::ClientVeryShortAdjustPosition(float Timestamp, const struct FVector& NewLoc, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
}
	void ACharacter::ClientCheatWalk() {
}
	void ACharacter::ClientCheatGhost() {
}
	void ACharacter::ClientCheatFly() {
}
	void ACharacter::ClientAdjustRootMotionSourcePosition(float Timestamp, const struct FRootMotionSourceGroup& ServerRootMotion, bool bHasAnimRootMotion, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
}
	void ACharacter::ClientAdjustRootMotionPosition(float Timestamp, float ServerMontageTrackPosition, const struct FVector& ServerLoc, const struct FVector_NetQuantizeNormal& ServerRotation, float ServerVelZ, class UPrimitiveComponent* ServerBase, const struct FName& ServerBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
}
	void ACharacter::ClientAdjustPosition(float Timestamp, const struct FVector& NewLoc, const struct FVector& NewVel, class UPrimitiveComponent* NewBase, const struct FName& NewBaseBoneName, bool bHasBase, bool bBaseRelativePosition, unsigned char ServerMovementMode) {
}
	void ACharacter::ClientAckGoodMove(float Timestamp) {
}
	bool ACharacter::CanJumpInternal() {
}
	bool ACharacter::CanJump() {
}
	void ACharacter::CacheInitialMeshOffset(const struct FVector& MeshRelativeLocation, const struct FRotator& MeshRelativeRotation) {
}
