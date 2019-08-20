#pragma once

#include "CoreMinimal.h"
#include "ImportanceSamplingLibrary.generated.h"

UCLASS()
class UImportanceSamplingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
	float STATIC_RandomSobolFloat(int Index, int Dimension, float Seed);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		struct FVector STATIC_RandomSobolCell3D(int Index, int NumCells, const struct FVector& Cell, const struct FVector& Seed);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		struct FVector2D STATIC_RandomSobolCell2D(int Index, int NumCells, const struct FVector2D& Cell, const struct FVector2D& Seed);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		float STATIC_NextSobolFloat(int Index, int Dimension, float PreviousValue);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		struct FVector STATIC_NextSobolCell3D(int Index, int NumCells, const struct FVector& PreviousValue);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		struct FVector2D STATIC_NextSobolCell2D(int Index, int NumCells, const struct FVector2D& PreviousValue);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		struct FImportanceTexture STATIC_MakeImportanceTexture(class UTexture2D* Texture, TEnumAsByte<EImportanceWeight> WeightingFunc);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		void STATIC_ImportanceSample(const struct FImportanceTexture& Texture, const struct FVector2D& Rand, int Samples, float Intensity, struct FVector2D* SamplePosition, struct FLinearColor* SampleColor, float* SampleIntensity, float* SampleSize);
	UFUNCTION(BlueprintCallable, Category = "ImportanceSamplingLibrary")
		void STATIC_BreakImportanceTexture(const struct FImportanceTexture& ImportanceTexture, class UTexture2D** Texture, TEnumAsByte<EImportanceWeight>* WeightingFunc);

};