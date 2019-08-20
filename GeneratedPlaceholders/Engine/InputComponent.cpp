#include "InputComponent.h"

bool UInputComponent::WasControllerKeyJustReleased(const struct FKey& Key) {
}
	bool UInputComponent::WasControllerKeyJustPressed(const struct FKey& Key) {
}
	bool UInputComponent::IsControllerKeyDown(const struct FKey& Key) {
}
	void UInputComponent::GetTouchState(int FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed) {
}
	struct FVector UInputComponent::GetControllerVectorKeyState(const struct FKey& Key) {
}
	void UInputComponent::GetControllerMouseDelta(float* DeltaX, float* DeltaY) {
}
	float UInputComponent::GetControllerKeyTimeDown(const struct FKey& Key) {
}
	void UInputComponent::GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY) {
}
	float UInputComponent::GetControllerAnalogKeyState(const struct FKey& Key) {
}
