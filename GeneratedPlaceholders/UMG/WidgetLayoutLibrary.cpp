#include "WidgetLayoutLibrary.h"

class UVerticalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget) {
}
	class UUniformGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsUniformGridSlot(class UWidget* Widget) {
}
	class UOverlaySlot* UWidgetLayoutLibrary::STATIC_SlotAsOverlaySlot(class UWidget* Widget) {
}
	class UHorizontalBoxSlot* UWidgetLayoutLibrary::STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget) {
}
	class UGridSlot* UWidgetLayoutLibrary::STATIC_SlotAsGridSlot(class UWidget* Widget) {
}
	class UCanvasPanelSlot* UWidgetLayoutLibrary::STATIC_SlotAsCanvasSlot(class UWidget* Widget) {
}
	class UBorderSlot* UWidgetLayoutLibrary::STATIC_SlotAsBorderSlot(class UWidget* Widget) {
}
	void UWidgetLayoutLibrary::STATIC_RemoveAllWidgets(class UObject* WorldContextObject) {
}
	bool UWidgetLayoutLibrary::STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition) {
}
	struct FGeometry UWidgetLayoutLibrary::STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject) {
}
	struct FVector2D UWidgetLayoutLibrary::STATIC_GetViewportSize(class UObject* WorldContextObject) {
}
	float UWidgetLayoutLibrary::STATIC_GetViewportScale(class UObject* WorldContextObject) {
}
	struct FGeometry UWidgetLayoutLibrary::STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController) {
}
	bool UWidgetLayoutLibrary::STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY) {
}
	struct FVector2D UWidgetLayoutLibrary::STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject) {
}
	struct FVector2D UWidgetLayoutLibrary::STATIC_GetMousePositionOnPlatform() {
}
