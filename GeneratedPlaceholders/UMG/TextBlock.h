#pragma once

#include "CoreMinimal.h"
#include "TextBlock.generated.h"

UCLASS()
class UTextBlock : public UTextLayoutWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Text;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate TextDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateColor ColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ColorAndOpacityDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateFontInfo Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ShadowOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ShadowColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate ShadowColorAndOpacityDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDesiredWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWrapWithInvalidationPanel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutoWrapText;

	UFUNCTION(BlueprintCallable, Category = "TextBlock")
	void SetText(const struct FText& InText);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetShadowOffset(const struct FVector2D& InShadowOffset);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetOpacity(float InOpacity);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetMinDesiredWidth(float InMinDesiredWidth);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetJustification(TEnumAsByte<ETextJustify> InJustification);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetFont(const struct FSlateFontInfo& InFontInfo);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		void SetAutoWrapText(bool InAutoTextWrap);
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		struct FText GetText();
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
	UFUNCTION(BlueprintCallable, Category = "TextBlock")
		class UMaterialInstanceDynamic* GetDynamicFontMaterial();

};