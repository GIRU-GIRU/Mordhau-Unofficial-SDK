#include "WidgetInteractionComponent.h"

void UWidgetInteractionComponent::SetCustomHitResult(const struct FHitResult& HitResult) {
}
	bool UWidgetInteractionComponent::SendKeyChar(const struct FString& Characters, bool bRepeat) {
}
	void UWidgetInteractionComponent::ScrollWheel(float ScrollDelta) {
}
	void UWidgetInteractionComponent::ReleasePointerKey(const struct FKey& Key) {
}
	bool UWidgetInteractionComponent::ReleaseKey(const struct FKey& Key) {
}
	void UWidgetInteractionComponent::PressPointerKey(const struct FKey& Key) {
}
	bool UWidgetInteractionComponent::PressKey(const struct FKey& Key, bool bRepeat) {
}
	bool UWidgetInteractionComponent::PressAndReleaseKey(const struct FKey& Key) {
}
	bool UWidgetInteractionComponent::IsOverInteractableWidget() {
}
	bool UWidgetInteractionComponent::IsOverHitTestVisibleWidget() {
}
	bool UWidgetInteractionComponent::IsOverFocusableWidget() {
}
	struct FHitResult UWidgetInteractionComponent::GetLastHitResult() {
}
	class UWidgetComponent* UWidgetInteractionComponent::GetHoveredWidgetComponent() {
}
	struct FVector2D UWidgetInteractionComponent::Get2DHitLocation() {
}
