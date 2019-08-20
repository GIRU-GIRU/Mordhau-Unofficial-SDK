#pragma once

#include "CoreMinimal.h"
#include "InputComponent.generated.h"

UCLASS()
class UInputComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCachedKeyToActionInfo> CachedKeyToActionInfo;

	UFUNCTION(BlueprintCallable, Category = "InputComponent")
	bool WasControllerKeyJustReleased(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		bool WasControllerKeyJustPressed(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		bool IsControllerKeyDown(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		void GetTouchState(int FingerIndex, float* LocationX, float* LocationY, bool* bIsCurrentlyPressed);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		struct FVector GetControllerVectorKeyState(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		void GetControllerMouseDelta(float* DeltaX, float* DeltaY);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		float GetControllerKeyTimeDown(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		void GetControllerAnalogStickState(TEnumAsByte<EControllerAnalogStick> WhichStick, float* StickX, float* StickY);
	UFUNCTION(BlueprintCallable, Category = "InputComponent")
		float GetControllerAnalogKeyState(const struct FKey& Key);

};