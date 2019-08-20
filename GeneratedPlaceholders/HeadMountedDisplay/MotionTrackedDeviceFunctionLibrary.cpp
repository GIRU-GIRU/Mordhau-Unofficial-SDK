#include "MotionTrackedDeviceFunctionLibrary.h"

void UMotionTrackedDeviceFunctionLibrary::STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable) {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName) {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand) {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent) {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionTrackedDeviceCountManagementNecessary() {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName) {
}
	int UMotionTrackedDeviceFunctionLibrary::STATIC_GetMotionTrackingEnabledControllerCount() {
}
	int UMotionTrackedDeviceFunctionLibrary::STATIC_GetMaximumMotionTrackedControllerCount() {
}
	struct FName UMotionTrackedDeviceFunctionLibrary::STATIC_GetActiveTrackingSystemName() {
}
	TArray<struct FName> UMotionTrackedDeviceFunctionLibrary::STATIC_EnumerateMotionSources() {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName) {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand) {
}
	bool UMotionTrackedDeviceFunctionLibrary::STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent) {
}
	void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName) {
}
	void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand) {
}
	void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex) {
}
	void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingOfAllControllers() {
}
	void UMotionTrackedDeviceFunctionLibrary::STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent) {
}
