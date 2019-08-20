#include "ActorComponent.h"

void UActorComponent::ToggleActive() {
}
	void UActorComponent::SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup) {
}
	void UActorComponent::SetTickableWhenPaused(bool bTickableWhenPaused) {
}
	void UActorComponent::SetIsReplicated(bool ShouldReplicate) {
}
	void UActorComponent::SetComponentTickInterval(float TickInterval) {
}
	void UActorComponent::SetComponentTickEnabled(bool bEnabled) {
}
	void UActorComponent::SetAutoActivate(bool bNewAutoActivate) {
}
	void UActorComponent::SetActive(bool bNewActive, bool bReset) {
}
	void UActorComponent::RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
}
	void UActorComponent::RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor) {
}
	void UActorComponent::ReceiveTick(float DeltaSeconds) {
}
	void UActorComponent::ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason) {
}
	void UActorComponent::ReceiveBeginPlay() {
}
	void UActorComponent::OnRep_IsActive() {
}
	void UActorComponent::K2_DestroyComponent(class UObject* Object) {
}
	bool UActorComponent::IsComponentTickEnabled() {
}
	bool UActorComponent::IsBeingDestroyed() {
}
	bool UActorComponent::IsActive() {
}
	class AActor* UActorComponent::GetOwner() {
}
	float UActorComponent::GetComponentTickInterval() {
}
	void UActorComponent::Deactivate() {
}
	bool UActorComponent::ComponentHasTag(const struct FName& Tag) {
}
	void UActorComponent::AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent) {
}
	void UActorComponent::AddTickPrerequisiteActor(class AActor* PrerequisiteActor) {
}
	void UActorComponent::Activate(bool bReset) {
}
