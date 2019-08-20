#pragma once

#include "CoreMinimal.h"
#include "StereoLayerFunctionLibrary.generated.h"

UCLASS()
class UStereoLayerFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "StereoLayerFunctionLibrary")
	void STATIC_ShowSplashScreen();
	UFUNCTION(BlueprintCallable, Category = "StereoLayerFunctionLibrary")
		void STATIC_SetSplashScreen(class UTexture* Texture, const struct FVector2D& Scale, const struct FVector2D& Offset, bool bShowLoadingMovie, bool bShowOnSet);
	UFUNCTION(BlueprintCallable, Category = "StereoLayerFunctionLibrary")
		void STATIC_HideSplashScreen();
	UFUNCTION(BlueprintCallable, Category = "StereoLayerFunctionLibrary")
		void STATIC_EnableAutoLoadingSplashScreen(bool InAutoShowEnabled);

};