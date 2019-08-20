#include "SceneComponent.h"

void USceneComponent::ToggleVisibility(bool bPropagateToChildren) {
}
	bool USceneComponent::SnapTo(class USceneComponent* InParent, const struct FName& InSocketName) {
}
	void USceneComponent::SetWorldScale3D(const struct FVector& NewScale) {
}
	void USceneComponent::SetVisibility(bool bNewVisibility, bool bPropagateToChildren) {
}
	void USceneComponent::SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume) {
}
	void USceneComponent::SetRelativeScale3D(const struct FVector& NewScale3D) {
}
	void USceneComponent::SetHiddenInGame(bool NewHidden, bool bPropagateToChildren) {
}
	void USceneComponent::SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale) {
}
	void USceneComponent::ResetRelativeTransform() {
}
	void USceneComponent::OnRep_Visibility(bool OldValue) {
}
	void USceneComponent::OnRep_Transform() {
}
	void USceneComponent::OnRep_AttachSocketName() {
}
	void USceneComponent::OnRep_AttachParent() {
}
	void USceneComponent::OnRep_AttachChildren() {
}
	void USceneComponent::K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_SetWorldLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	struct FTransform USceneComponent::K2_GetComponentToWorld() {
}
	struct FVector USceneComponent::K2_GetComponentScale() {
}
	struct FRotator USceneComponent::K2_GetComponentRotation() {
}
	struct FVector USceneComponent::K2_GetComponentLocation() {
}
	void USceneComponent::K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify) {
}
	bool USceneComponent::K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}
	bool USceneComponent::K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies) {
}
	void USceneComponent::K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	void USceneComponent::K2_AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult) {
}
	bool USceneComponent::IsVisible() {
}
	bool USceneComponent::IsSimulatingPhysics(const struct FName& BoneName) {
}
	bool USceneComponent::IsAnySimulatingPhysics() {
}
	struct FVector USceneComponent::GetUpVector() {
}
	struct FTransform USceneComponent::GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace) {
}
	struct FRotator USceneComponent::GetSocketRotation(const struct FName& InSocketName) {
}
	struct FQuat USceneComponent::GetSocketQuaternion(const struct FName& InSocketName) {
}
	struct FVector USceneComponent::GetSocketLocation(const struct FName& InSocketName) {
}
	bool USceneComponent::GetShouldUpdatePhysicsVolume() {
}
	struct FVector USceneComponent::GetRightVector() {
}
	struct FTransform USceneComponent::GetRelativeTransform() {
}
	class APhysicsVolume* USceneComponent::GetPhysicsVolume() {
}
	void USceneComponent::GetParentComponents(TArray<class USceneComponent*>* Parents) {
}
	int USceneComponent::GetNumChildrenComponents() {
}
	struct FVector USceneComponent::GetForwardVector() {
}
	struct FVector USceneComponent::GetComponentVelocity() {
}
	void USceneComponent::GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children) {
}
	class USceneComponent* USceneComponent::GetChildComponent(int ChildIndex) {
}
	struct FName USceneComponent::GetAttachSocketName() {
}
	class USceneComponent* USceneComponent::GetAttachParent() {
}
	TArray<struct FName> USceneComponent::GetAllSocketNames() {
}
	bool USceneComponent::DoesSocketExist(const struct FName& InSocketName) {
}
	void USceneComponent::DetachFromParent(bool bMaintainWorldPosition, bool bCallModify) {
}
