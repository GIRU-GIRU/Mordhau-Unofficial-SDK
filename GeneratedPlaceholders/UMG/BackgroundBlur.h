#pragma once

#include "CoreMinimal.h"
#include "BackgroundBlur.generated.h"

UCLASS()
class UBackgroundBlur : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VerticalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bApplyAlphaToBlur;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlurStrength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideAutoRadiusCalculation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BlurRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateBrush LowQualityFallbackBrush;

	UFUNCTION(BlueprintCallable, Category = "BackgroundBlur")
	void SetVerticalAlignment(TEnumAsByte<EVerticalAlignment> InVerticalAlignment);
	UFUNCTION(BlueprintCallable, Category = "BackgroundBlur")
		void SetPadding(const struct FMargin& InPadding);
	UFUNCTION(BlueprintCallable, Category = "BackgroundBlur")
		void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
	UFUNCTION(BlueprintCallable, Category = "BackgroundBlur")
		void SetHorizontalAlignment(TEnumAsByte<EHorizontalAlignment> InHorizontalAlignment);
	UFUNCTION(BlueprintCallable, Category = "BackgroundBlur")
		void SetBlurStrength(float InStrength);
	UFUNCTION(BlueprintCallable, Category = "BackgroundBlur")
		void SetBlurRadius(int InBlurRadius);
	UFUNCTION(BlueprintCallable, Category = "BackgroundBlur")
		void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);

};