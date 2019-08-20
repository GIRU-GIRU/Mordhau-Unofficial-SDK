#pragma once

#include "CoreMinimal.h"
#include "KismetInputLibrary.generated.h"

UCLASS()
class UKismetInputLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
	bool STATIC_PointerEvent_IsTouchEvent(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_PointerEvent_IsMouseButtonDown(const struct FPointerEvent& Input, const struct FKey& MouseButton);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		float STATIC_PointerEvent_GetWheelDelta(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		int STATIC_PointerEvent_GetUserIndex(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		int STATIC_PointerEvent_GetTouchpadIndex(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		struct FVector2D STATIC_PointerEvent_GetScreenSpacePosition(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		int STATIC_PointerEvent_GetPointerIndex(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		struct FVector2D STATIC_PointerEvent_GetLastScreenSpacePosition(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		ESlateGesture STATIC_PointerEvent_GetGestureType(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		struct FVector2D STATIC_PointerEvent_GetGestureDelta(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		struct FKey STATIC_PointerEvent_GetEffectingButton(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		struct FVector2D STATIC_PointerEvent_GetCursorDelta(const struct FPointerEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_Key_IsVectorAxis(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_Key_IsValid(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_Key_IsMouseButton(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_Key_IsModifierKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_Key_IsKeyboardKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_Key_IsGamepadKey(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_Key_IsFloatAxis(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		struct FText STATIC_Key_GetDisplayName(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsShiftDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsRightShiftDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsRightControlDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsRightCommandDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsRightAltDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsRepeat(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsLeftShiftDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsLeftControlDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsLeftCommandDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsLeftAltDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsControlDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsCommandDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_InputEvent_IsAltDown(const struct FInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		int STATIC_GetUserIndex(const struct FKeyEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		struct FKey STATIC_GetKey(const struct FKeyEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		float STATIC_GetAnalogValue(const struct FAnalogInputEvent& Input);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_EqualEqual_KeyKey(const struct FKey& A, const struct FKey& B);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		bool STATIC_EqualEqual_InputChordInputChord(const struct FInputChord& A, const struct FInputChord& B);
	UFUNCTION(BlueprintCallable, Category = "KismetInputLibrary")
		void STATIC_CalibrateTilt();

};