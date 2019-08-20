#pragma once

#include "CoreMinimal.h"
#include "Border.generated.h"

UCLASS()
class UBorder : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowEffectWhenDisabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ContentColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ContentColorAndOpacityDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateBrush Background;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate BackgroundDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor BrushColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate BrushColorDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D DesiredSizeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnMouseButtonDownEvent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnMouseButtonUpEvent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnMouseMoveEvent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnMouseDoubleClickEvent;

	UFUNCTION(BlueprintCallable, Category = "Border")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetDesiredSizeScale(const struct FVector2D& InScale);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetBrushFromTexture(class UTexture2D* Texture);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetBrushFromMaterial(class UMaterialInterface* Material);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetBrushColor(const struct FLinearColor& InBrushColor);
	UFUNCTION(BlueprintCallable, Category = "Border")
		void SetBrush(const struct FSlateBrush& InBrush);
	UFUNCTION(BlueprintCallable, Category = "Border")
		class UMaterialInstanceDynamic* GetDynamicMaterial();

};