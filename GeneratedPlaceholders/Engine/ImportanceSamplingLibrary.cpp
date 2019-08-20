#include "ImportanceSamplingLibrary.h"

float UImportanceSamplingLibrary::STATIC_RandomSobolFloat(int Index, int Dimension, float Seed) {
}
	struct FVector UImportanceSamplingLibrary::STATIC_RandomSobolCell3D(int Index, int NumCells, const struct FVector& Cell, const struct FVector& Seed) {
}
	struct FVector2D UImportanceSamplingLibrary::STATIC_RandomSobolCell2D(int Index, int NumCells, const struct FVector2D& Cell, const struct FVector2D& Seed) {
}
	float UImportanceSamplingLibrary::STATIC_NextSobolFloat(int Index, int Dimension, float PreviousValue) {
}
	struct FVector UImportanceSamplingLibrary::STATIC_NextSobolCell3D(int Index, int NumCells, const struct FVector& PreviousValue) {
}
	struct FVector2D UImportanceSamplingLibrary::STATIC_NextSobolCell2D(int Index, int NumCells, const struct FVector2D& PreviousValue) {
}
	struct FImportanceTexture UImportanceSamplingLibrary::STATIC_MakeImportanceTexture(class UTexture2D* Texture, TEnumAsByte<EImportanceWeight> WeightingFunc) {
}
	void UImportanceSamplingLibrary::STATIC_ImportanceSample(const struct FImportanceTexture& Texture, const struct FVector2D& Rand, int Samples, float Intensity, struct FVector2D* SamplePosition, struct FLinearColor* SampleColor, float* SampleIntensity, float* SampleSize) {
}
	void UImportanceSamplingLibrary::STATIC_BreakImportanceTexture(const struct FImportanceTexture& ImportanceTexture, class UTexture2D** Texture, TEnumAsByte<EImportanceWeight>* WeightingFunc) {
}
