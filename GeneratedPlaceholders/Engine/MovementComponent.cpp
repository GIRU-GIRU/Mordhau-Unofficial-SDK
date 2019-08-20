#include "MovementComponent.h"

void UMovementComponent::StopMovementImmediately() {
}
	void UMovementComponent::SnapUpdatedComponentToPlane() {
}
	void UMovementComponent::SetUpdatedComponent(class USceneComponent* NewUpdatedComponent) {
}
	void UMovementComponent::SetPlaneConstraintOrigin(const struct FVector& PlaneOrigin) {
}
	void UMovementComponent::SetPlaneConstraintNormal(const struct FVector& PlaneNormal) {
}
	void UMovementComponent::SetPlaneConstraintFromVectors(const struct FVector& Forward, const struct FVector& Up) {
}
	void UMovementComponent::SetPlaneConstraintEnabled(bool bEnabled) {
}
	void UMovementComponent::SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting) {
}
	void UMovementComponent::PhysicsVolumeChanged(class APhysicsVolume* NewVolume) {
}
	bool UMovementComponent::K2_MoveUpdatedComponent(const struct FVector& Delta, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* OutHit) {
}
	float UMovementComponent::K2_GetModifiedMaxSpeed() {
}
	float UMovementComponent::K2_GetMaxSpeedModifier() {
}
	bool UMovementComponent::IsExceedingMaxSpeed(float MaxSpeed) {
}
	struct FVector UMovementComponent::GetPlaneConstraintOrigin() {
}
	struct FVector UMovementComponent::GetPlaneConstraintNormal() {
}
	EPlaneConstraintAxisSetting UMovementComponent::GetPlaneConstraintAxisSetting() {
}
	class APhysicsVolume* UMovementComponent::GetPhysicsVolume() {
}
	float UMovementComponent::GetMaxSpeed() {
}
	float UMovementComponent::GetGravityZ() {
}
	struct FVector UMovementComponent::ConstrainNormalToPlane(const struct FVector& Normal) {
}
	struct FVector UMovementComponent::ConstrainLocationToPlane(const struct FVector& Location) {
}
	struct FVector UMovementComponent::ConstrainDirectionToPlane(const struct FVector& Direction) {
}
