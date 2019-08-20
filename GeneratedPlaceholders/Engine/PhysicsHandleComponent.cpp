#include "PhysicsHandleComponent.h"

void UPhysicsHandleComponent::SetTargetRotation(const struct FRotator& NewRotation) {
}
	void UPhysicsHandleComponent::SetTargetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation) {
}
	void UPhysicsHandleComponent::SetTargetLocation(const struct FVector& NewLocation) {
}
	void UPhysicsHandleComponent::SetLinearStiffness(float NewLinearStiffness) {
}
	void UPhysicsHandleComponent::SetLinearDamping(float NewLinearDamping) {
}
	void UPhysicsHandleComponent::SetInterpolationSpeed(float NewInterpolationSpeed) {
}
	void UPhysicsHandleComponent::SetAngularStiffness(float NewAngularStiffness) {
}
	void UPhysicsHandleComponent::SetAngularDamping(float NewAngularDamping) {
}
	void UPhysicsHandleComponent::ReleaseComponent() {
}
	void UPhysicsHandleComponent::GrabComponentAtLocationWithRotation(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& Location, const struct FRotator& Rotation) {
}
	void UPhysicsHandleComponent::GrabComponentAtLocation(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation) {
}
	void UPhysicsHandleComponent::GrabComponent(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation, bool bConstrainRotation) {
}
	void UPhysicsHandleComponent::GetTargetLocationAndRotation(struct FVector* TargetLocation, struct FRotator* TargetRotation) {
}
	class UPrimitiveComponent* UPhysicsHandleComponent::GetGrabbedComponent() {
}
