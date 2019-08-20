#pragma once

#include "CoreMinimal.h"
#include "WidgetBlueprintLibrary.generated.h"

UCLASS()
class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
	struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_Unhandled();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetFocusToGameViewport();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_RestorePreviousWindowTitleBarState();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FSlateBrush STATIC_NoResourceBrush();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		bool STATIC_IsDragDropping();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_Handled();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		class UDragDropOperation* STATIC_GetDragDroppingContent();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_DismissAllMenus();
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		struct FEventReply STATIC_CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply);
	UFUNCTION(BlueprintCallable, Category = "WidgetBlueprintLibrary")
		void STATIC_CancelDragDrop();

};