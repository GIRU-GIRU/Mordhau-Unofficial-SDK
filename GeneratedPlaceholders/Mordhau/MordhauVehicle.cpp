#include "MordhauVehicle.h"

void AMordhauVehicle::UpdateFPCameraFor(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly) {
}
	void AMordhauVehicle::UpdateAnimationFor(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime) {
}
	void AMordhauVehicle::StopDriving() {
}
	void AMordhauVehicle::StartDriving(class AMordhauCharacter* Character) {
}
	void AMordhauVehicle::SetDriver(class AMordhauCharacter* NewDriver) {
}
	void AMordhauVehicle::ServerSecondaryTurn(float NewTurn) {
}
	void AMordhauVehicle::SecondaryTurnAtRate(float Value) {
}
	void AMordhauVehicle::SecondaryTurn(float Value, bool bIsAbsolute) {
}
	void AMordhauVehicle::RequestUse() {
}
	struct FPOV AMordhauVehicle::PostProcessCameraPOV(const struct FPOV& InPOV) {
}
	float AMordhauVehicle::OverrideAttackAngle(class UAttackMotion* Motion) {
}
	void AMordhauVehicle::OnStoppedDriving(class AMordhauCharacter* Character) {
}
	void AMordhauVehicle::OnStartedDriving(class AMordhauCharacter* Character) {
}
	void AMordhauVehicle::OnRep_ReplicatedSecondaryTurnValue() {
}
	void AMordhauVehicle::KnockOffDriver(class AMordhauCharacter* Character) {
}
	struct FVehicleTransitionInfo AMordhauVehicle::GetVehicleLeaveInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform) {
}
	struct FVehicleTransitionInfo AMordhauVehicle::GetVehicleEnterInfo(class AMordhauCharacter* Character, const struct FTransform& FromTransform) {
}
	struct FTransform AMordhauVehicle::GetExitTransform() {
}
	void AMordhauVehicle::DriverLateTick(class AMordhauCharacter* FromDriver, float DeltaTime) {
}
	bool AMordhauVehicle::CanDrive(class AMordhauCharacter* Character) {
}
