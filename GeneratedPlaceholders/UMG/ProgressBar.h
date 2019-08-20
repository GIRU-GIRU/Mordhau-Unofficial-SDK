#pragma once

#include "CoreMinimal.h"
#include "ProgressBar.generated.h"

UCLASS()
class UProgressBar : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FProgressBarStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* BackgroundImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* FillImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* MarqueeImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Percent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EProgressBarFillType> BarFillType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsMarquee;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D BorderPadding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate PercentDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor FillColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate FillColorAndOpacityDelegate;

	UFUNCTION(BlueprintCallable, Category = "ProgressBar")
	void SetPercent(float InPercent);
	UFUNCTION(BlueprintCallable, Category = "ProgressBar")
		void SetIsMarquee(bool InbIsMarquee);
	UFUNCTION(BlueprintCallable, Category = "ProgressBar")
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);

};