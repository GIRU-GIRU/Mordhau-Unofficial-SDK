#include "MotionControllerComponent.h"

void UMotionControllerComponent::SetTrackingSource(EControllerHand NewSource) {
}
	void UMotionControllerComponent::SetTrackingMotionSource(const struct FName& NewSource) {
}
	void UMotionControllerComponent::SetShowDeviceModel(bool bShowControllerModel) {
}
	void UMotionControllerComponent::SetDisplayModelSource(const struct FName& NewDisplayModelSource) {
}
	void UMotionControllerComponent::SetCustomDisplayMesh(class UStaticMesh* NewDisplayMesh) {
}
	void UMotionControllerComponent::SetAssociatedPlayerIndex(int NewPlayer) {
}
	void UMotionControllerComponent::OnMotionControllerUpdated() {
}
	bool UMotionControllerComponent::IsTracked() {
}
	EControllerHand UMotionControllerComponent::GetTrackingSource() {
}
	float UMotionControllerComponent::GetParameterValue(const struct FName& InName, bool* bValueFound) {
}
