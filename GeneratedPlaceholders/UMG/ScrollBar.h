#pragma once

#include "CoreMinimal.h"
#include "ScrollBar.generated.h"

UCLASS()
class UScrollBar : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScrollBarStyle WidgetStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateWidgetStyleAsset* Style;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAlwaysShowScrollbar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOrientation> Orientation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D Thickness;

	UFUNCTION(BlueprintCallable, Category = "ScrollBar")
	void SetState(float InOffsetFraction, float InThumbSizeFraction);

};