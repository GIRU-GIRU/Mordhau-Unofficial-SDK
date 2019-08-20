#pragma once

#include "CoreMinimal.h"
#include "SlateBlueprintLibrary.generated.h"

UCLASS()
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
	void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
	UFUNCTION(BlueprintCallable, Category = "SlateBlueprintLibrary")
		struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);

};