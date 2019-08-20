#pragma once

#include "CoreMinimal.h"
#include "WidgetLayoutLibrary.generated.h"

UCLASS()
class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
	class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		float STATIC_GetViewportScale(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "WidgetLayoutLibrary")
		struct FVector2D STATIC_GetMousePositionOnPlatform();

};