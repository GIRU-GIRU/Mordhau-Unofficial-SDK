#include "HeadMountedDisplayFunctionLibrary.h"

void UHeadMountedDisplayFunctionLibrary::STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenTexture(class UTexture* InTexture) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_SetSpectatorScreenMode(ESpectatorScreenMode Mode) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_SetClippingPlanes(float Near, float Far) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options) {
}
	bool UHeadMountedDisplayFunctionLibrary::STATIC_IsSpectatorScreenModeControllable() {
}
	bool UHeadMountedDisplayFunctionLibrary::STATIC_IsInLowPersistenceMode() {
}
	bool UHeadMountedDisplayFunctionLibrary::STATIC_IsHeadMountedDisplayEnabled() {
}
	bool UHeadMountedDisplayFunctionLibrary::STATIC_IsHeadMountedDisplayConnected() {
}
	bool UHeadMountedDisplayFunctionLibrary::STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId) {
}
	bool UHeadMountedDisplayFunctionLibrary::STATIC_HasValidTrackingPosition() {
}
	float UHeadMountedDisplayFunctionLibrary::STATIC_GetWorldToMetersScale(class UObject* WorldContext) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus) {
}
	struct FTransform UHeadMountedDisplayFunctionLibrary::STATIC_GetTrackingToWorldTransform(class UObject* WorldContext) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive) {
}
	TEnumAsByte<EHMDTrackingOrigin> UHeadMountedDisplayFunctionLibrary::STATIC_GetTrackingOrigin() {
}
	float UHeadMountedDisplayFunctionLibrary::STATIC_GetScreenPercentage() {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane) {
}
	float UHeadMountedDisplayFunctionLibrary::STATIC_GetPixelDensity() {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition) {
}
	int UHeadMountedDisplayFunctionLibrary::STATIC_GetNumOfTrackingSensors() {
}
	TEnumAsByte<EHMDWornState> UHeadMountedDisplayFunctionLibrary::STATIC_GetHMDWornState() {
}
	struct FName UHeadMountedDisplayFunctionLibrary::STATIC_GetHMDDeviceName() {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position) {
}
	TArray<struct FXRDeviceId> UHeadMountedDisplayFunctionLibrary::STATIC_EnumerateTrackedDevices(const struct FName& SystemId, EXRTrackedDeviceType DeviceType) {
}
	void UHeadMountedDisplayFunctionLibrary::STATIC_EnableLowPersistenceMode(bool bEnable) {
}
	bool UHeadMountedDisplayFunctionLibrary::STATIC_EnableHMD(bool bEnable) {
}
