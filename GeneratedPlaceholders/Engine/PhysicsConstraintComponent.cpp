#include "PhysicsConstraintComponent.h"

void UPhysicsConstraintComponent::SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
}
	void UPhysicsConstraintComponent::SetOrientationDriveSLERP(bool bEnableSLERP) {
}
	void UPhysicsConstraintComponent::SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize) {
}
	void UPhysicsConstraintComponent::SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize) {
}
	void UPhysicsConstraintComponent::SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize) {
}
	void UPhysicsConstraintComponent::SetLinearVelocityTarget(const struct FVector& InVelTarget) {
}
	void UPhysicsConstraintComponent::SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
}
	void UPhysicsConstraintComponent::SetLinearPositionTarget(const struct FVector& InPosTarget) {
}
	void UPhysicsConstraintComponent::SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ) {
}
	void UPhysicsConstraintComponent::SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
}
	void UPhysicsConstraintComponent::SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold) {
}
	void UPhysicsConstraintComponent::SetDisableCollision(bool bDisableCollision) {
}
	void UPhysicsConstraintComponent::SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& RefPosition) {
}
	void UPhysicsConstraintComponent::SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& PriAxis, const struct FVector& SecAxis) {
}
	void UPhysicsConstraintComponent::SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame> Frame, const struct FTransform& RefFrame) {
}
	void UPhysicsConstraintComponent::SetConstrainedComponents(class UPrimitiveComponent* Component1, const struct FName& BoneName1, class UPrimitiveComponent* Component2, const struct FName& BoneName2) {
}
	void UPhysicsConstraintComponent::SetAngularVelocityTarget(const struct FVector& InVelTarget) {
}
	void UPhysicsConstraintComponent::SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive) {
}
	void UPhysicsConstraintComponent::SetAngularVelocityDriveSLERP(bool bEnableSLERP) {
}
	void UPhysicsConstraintComponent::SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
}
	void UPhysicsConstraintComponent::SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle) {
}
	void UPhysicsConstraintComponent::SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle) {
}
	void UPhysicsConstraintComponent::SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle) {
}
	void UPhysicsConstraintComponent::SetAngularOrientationTarget(const struct FRotator& InPosTarget) {
}
	void UPhysicsConstraintComponent::SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive) {
}
	void UPhysicsConstraintComponent::SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit) {
}
	void UPhysicsConstraintComponent::SetAngularDriveMode(TEnumAsByte<EAngularDriveMode> DriveMode) {
}
	void UPhysicsConstraintComponent::SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold) {
}
	bool UPhysicsConstraintComponent::IsBroken() {
}
	float UPhysicsConstraintComponent::GetCurrentTwist() {
}
	float UPhysicsConstraintComponent::GetCurrentSwing2() {
}
	float UPhysicsConstraintComponent::GetCurrentSwing1() {
}
	void UPhysicsConstraintComponent::GetConstraintForce(struct FVector* OutLinearForce, struct FVector* OutAngularForce) {
}
	void UPhysicsConstraintComponent::BreakConstraint() {
}
