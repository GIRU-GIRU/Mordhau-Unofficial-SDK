#pragma once

#include "CoreMinimal.h"
#include "MotionTrackedDeviceFunctionLibrary.generated.h"

UCLASS()
class UMotionTrackedDeviceFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
	void STATIC_SetIsControllerMotionTrackingEnabledByDefault(bool Enable);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_IsMotionTrackingEnabledForSource(int PlayerIndex, const struct FName& SourceName);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_IsMotionTrackingEnabledForDevice(int PlayerIndex, EControllerHand Hand);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_IsMotionTrackingEnabledForComponent(class UMotionControllerComponent* MotionControllerComponent);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_IsMotionTrackedDeviceCountManagementNecessary();
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_IsMotionSourceTracking(int PlayerIndex, const struct FName& SourceName);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		int STATIC_GetMotionTrackingEnabledControllerCount();
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		int STATIC_GetMaximumMotionTrackedControllerCount();
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		struct FName STATIC_GetActiveTrackingSystemName();
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		TArray<struct FName> STATIC_EnumerateMotionSources();
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_EnableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_EnableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		bool STATIC_EnableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		void STATIC_DisableMotionTrackingOfSource(int PlayerIndex, const struct FName& SourceName);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		void STATIC_DisableMotionTrackingOfDevice(int PlayerIndex, EControllerHand Hand);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		void STATIC_DisableMotionTrackingOfControllersForPlayer(int PlayerIndex);
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		void STATIC_DisableMotionTrackingOfAllControllers();
	UFUNCTION(BlueprintCallable, Category = "MotionTrackedDeviceFunctionLibrary")
		void STATIC_DisableMotionTrackingForComponent(class UMotionControllerComponent* MotionControllerComponent);

};