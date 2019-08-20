#pragma once

#include "CoreMinimal.h"
#include "HeadMountedDisplayFunctionLibrary.generated.h"

UCLASS()
class UHeadMountedDisplayFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
	void STATIC_SetWorldToMetersScale(class UObject* WorldContext, float NewScale);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_SetTrackingOrigin(TEnumAsByte<EHMDTrackingOrigin> Origin);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_SetSpectatorScreenTexture(class UTexture* InTexture);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_SetSpectatorScreenModeTexturePlusEyeLayout(const struct FVector2D& EyeRectMin, const struct FVector2D& EyeRectMax, const struct FVector2D& TextureRectMin, const struct FVector2D& TextureRectMax, bool bDrawEyeFirst, bool bClearBlack);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_SetSpectatorScreenMode(ESpectatorScreenMode Mode);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_SetClippingPlanes(float Near, float Far);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_ResetOrientationAndPosition(float Yaw, TEnumAsByte<EOrientPositionSelector> Options);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		bool STATIC_IsSpectatorScreenModeControllable();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		bool STATIC_IsInLowPersistenceMode();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		bool STATIC_IsHeadMountedDisplayEnabled();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		bool STATIC_IsHeadMountedDisplayConnected();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		bool STATIC_IsDeviceTracking(const struct FXRDeviceId& XRDeviceId);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		bool STATIC_HasValidTrackingPosition();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		float STATIC_GetWorldToMetersScale(class UObject* WorldContext);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_GetVRFocusState(bool* bUseFocus, bool* bHasFocus);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		struct FTransform STATIC_GetTrackingToWorldTransform(class UObject* WorldContext);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_GetTrackingSensorParameters(int Index, struct FVector* Origin, struct FRotator* Rotation, float* LeftFOV, float* RightFOV, float* TopFOV, float* BottomFOV, float* Distance, float* NearPlane, float* FarPlane, bool* IsActive);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		TEnumAsByte<EHMDTrackingOrigin> STATIC_GetTrackingOrigin();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		float STATIC_GetScreenPercentage();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_GetPositionalTrackingCameraParameters(struct FVector* CameraOrigin, struct FRotator* CameraRotation, float* HFOV, float* VFOV, float* CameraDistance, float* NearPlane, float* FarPlane);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		float STATIC_GetPixelDensity();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_GetOrientationAndPosition(struct FRotator* DeviceRotation, struct FVector* DevicePosition);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		int STATIC_GetNumOfTrackingSensors();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		TEnumAsByte<EHMDWornState> STATIC_GetHMDWornState();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		struct FName STATIC_GetHMDDeviceName();
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_GetDeviceWorldPose(class UObject* WorldContext, const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_GetDevicePose(const struct FXRDeviceId& XRDeviceId, bool* bIsTracked, struct FRotator* Orientation, bool* bHasPositionalTracking, struct FVector* Position);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		TArray<struct FXRDeviceId> STATIC_EnumerateTrackedDevices(const struct FName& SystemId, EXRTrackedDeviceType DeviceType);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		void STATIC_EnableLowPersistenceMode(bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "HeadMountedDisplayFunctionLibrary")
		bool STATIC_EnableHMD(bool bEnable);

};