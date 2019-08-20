#pragma once

#include "CoreMinimal.h"
#include "CurveLinearColorAtlas.generated.h"

UCLASS()
class UCurveLinearColorAtlas : public UTexture2D
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t TextureSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t GradientPixelSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UCurveLinearColor*> GradientCurves;

	UFUNCTION(BlueprintCallable, Category = "CurveLinearColorAtlas")
	bool GetCurvePosition(class UCurveLinearColor* InCurve, float* Position);
	UFUNCTION(BlueprintCallable, Category = "CurveLinearColorAtlas")
		bool GetCurveIndex(class UCurveLinearColor* InCurve, int* Index);

};