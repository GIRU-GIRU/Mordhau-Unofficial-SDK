#pragma once

#include "CoreMinimal.h"
#include "Image.generated.h"

UCLASS()
class UImage : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateBrush Brush;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate BrushDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ColorAndOpacityDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnMouseButtonDownEvent;

	UFUNCTION(BlueprintCallable, Category = "Image")
	void SetOpacity(float InOpacity);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrushTintColor(const struct FSlateColor& TintColor);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrushSize(const struct FVector2D& DesiredSize);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrushFromMaterial(class UMaterialInterface* Material);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrushFromAtlasInterface(const TScriptInterface<class USlateTextureAtlasInterface>& AtlasRegion, bool bMatchSize);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
	UFUNCTION(BlueprintCallable, Category = "Image")
		void SetBrush(const struct FSlateBrush& InBrush);
	UFUNCTION(BlueprintCallable, Category = "Image")
		class UMaterialInstanceDynamic* GetDynamicMaterial();

};