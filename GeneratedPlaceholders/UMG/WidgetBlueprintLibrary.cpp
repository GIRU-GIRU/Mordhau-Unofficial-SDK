#include "WidgetBlueprintLibrary.h"

struct FEventReply UWidgetBlueprintLibrary::STATIC_UnlockMouse(struct FEventReply* Reply) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_Unhandled() {
}
	void UWidgetBlueprintLibrary::STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible) {
}
	void UWidgetBlueprintLibrary::STATIC_SetWindowTitleBarOnCloseClickedDelegate(const struct FScriptDelegate& Delegate) {
}
	void UWidgetBlueprintLibrary::STATIC_SetWindowTitleBarCloseButtonActive(bool bActive) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_SetUserFocus(class UWidget* FocusWidget, bool bInAllUsers, struct FEventReply* Reply) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_SetMousePosition(const struct FVector2D& NewMousePosition, struct FEventReply* Reply) {
}
	void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode) {
}
	void UWidgetBlueprintLibrary::STATIC_SetInputMode_UIOnly(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport) {
}
	void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController) {
}
	void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture) {
}
	void UWidgetBlueprintLibrary::STATIC_SetInputMode_GameAndUI(class APlayerController* Target, class UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture) {
}
	bool UWidgetBlueprintLibrary::STATIC_SetHardwareCursor(class UObject* WorldContextObject, TEnumAsByte<EMouseCursor> CursorShape, const struct FName& CursorName, const struct FVector2D& HotSpot) {
}
	void UWidgetBlueprintLibrary::STATIC_SetFocusToGameViewport() {
}
	void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToTexture(class UTexture2D* Texture, struct FSlateBrush* Brush) {
}
	void UWidgetBlueprintLibrary::STATIC_SetBrushResourceToMaterial(class UMaterialInterface* Material, struct FSlateBrush* Brush) {
}
	void UWidgetBlueprintLibrary::STATIC_RestorePreviousWindowTitleBarState() {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseMouseCapture(struct FEventReply* Reply) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_ReleaseJoystickCapture(bool bInAllJoysticks, struct FEventReply* Reply) {
}
	void UWidgetBlueprintLibrary::OnGameWindowCloseButtonClickedDelegate__DelegateSignature() {
}
	struct FSlateBrush UWidgetBlueprintLibrary::STATIC_NoResourceBrush() {
}
	struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int Width, int Height) {
}
	struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int Width, int Height) {
}
	struct FSlateBrush UWidgetBlueprintLibrary::STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_LockMouse(class UWidget* CapturingWidget, struct FEventReply* Reply) {
}
	bool UWidgetBlueprintLibrary::STATIC_IsDragDropping() {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_Handled() {
}
	void UWidgetBlueprintLibrary::STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding) {
}
	struct FKeyEvent UWidgetBlueprintLibrary::STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event) {
}
	struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event) {
}
	struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event) {
}
	struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event) {
}
	struct FInputEvent UWidgetBlueprintLibrary::STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event) {
}
	class UMaterialInstanceDynamic* UWidgetBlueprintLibrary::STATIC_GetDynamicMaterial(struct FSlateBrush* Brush) {
}
	class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_GetDragDroppingContent() {
}
	class UTexture2D* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush) {
}
	class UMaterialInterface* UWidgetBlueprintLibrary::STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush) {
}
	class UObject* UWidgetBlueprintLibrary::STATIC_GetBrushResource(const struct FSlateBrush& Brush) {
}
	void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, class UClass* Interface, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets) {
}
	void UWidgetBlueprintLibrary::STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, class UClass* WidgetClass, bool TopLevelOnly, TArray<class UUserWidget*>* FoundWidgets) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_EndDragDrop(struct FEventReply* Reply) {
}
	void UWidgetBlueprintLibrary::STATIC_DrawTextFormatted(const struct FText& Text, const struct FVector2D& Position, class UFont* Font, int FontSize, const struct FName& FontTypeFace, const struct FLinearColor& Tint, struct FPaintContext* Context) {
}
	void UWidgetBlueprintLibrary::STATIC_DrawText(const struct FString& inString, const struct FVector2D& Position, const struct FLinearColor& Tint, struct FPaintContext* Context) {
}
	void UWidgetBlueprintLibrary::STATIC_DrawLines(TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context) {
}
	void UWidgetBlueprintLibrary::STATIC_DrawLine(const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, struct FPaintContext* Context) {
}
	void UWidgetBlueprintLibrary::STATIC_DrawBox(const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint, struct FPaintContext* Context) {
}
	void UWidgetBlueprintLibrary::STATIC_DismissAllMenus() {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_DetectDrag(class UWidget* WidgetDetectingDrag, const struct FKey& DragKey, struct FEventReply* Reply) {
}
	class UDragDropOperation* UWidgetBlueprintLibrary::STATIC_CreateDragDropOperation(class UClass* OperationClass) {
}
	class UUserWidget* UWidgetBlueprintLibrary::STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_ClearUserFocus(bool bInAllUsers, struct FEventReply* Reply) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureMouse(class UWidget* CapturingWidget, struct FEventReply* Reply) {
}
	struct FEventReply UWidgetBlueprintLibrary::STATIC_CaptureJoystick(class UWidget* CapturingWidget, bool bInAllJoysticks, struct FEventReply* Reply) {
}
	void UWidgetBlueprintLibrary::STATIC_CancelDragDrop() {
}
