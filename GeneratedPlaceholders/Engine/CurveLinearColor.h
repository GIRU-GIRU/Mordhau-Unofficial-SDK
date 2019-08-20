#pragma once

#include "CoreMinimal.h"
#include "CurveLinearColor.generated.h"

UCLASS()
class UCurveLinearColor : public UCurveBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRichCurve FloatCurves[0x4];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdjustHue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdjustSaturation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdjustBrightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdjustBrightnessCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdjustVibrance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdjustMinAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AdjustMaxAlpha;

	UFUNCTION(BlueprintCallable, Category = "CurveLinearColor")
	struct FLinearColor GetLinearColorValue(float InTime);

};