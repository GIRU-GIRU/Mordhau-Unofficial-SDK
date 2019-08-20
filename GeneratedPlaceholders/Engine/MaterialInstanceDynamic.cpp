#include "MaterialInstanceDynamic.h"

void UMaterialInstanceDynamic::SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value) {
}
	void UMaterialInstanceDynamic::SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value) {
}
	void UMaterialInstanceDynamic::SetScalarParameterValue(const struct FName& ParameterName, float Value) {
}
	void UMaterialInstanceDynamic::K2_InterpolateMaterialInstanceParams(class UMaterialInstance* SourceA, class UMaterialInstance* SourceB, float Alpha) {
}
	struct FLinearColor UMaterialInstanceDynamic::K2_GetVectorParameterValue(const struct FName& ParameterName) {
}
	class UTexture* UMaterialInstanceDynamic::K2_GetTextureParameterValue(const struct FName& ParameterName) {
}
	float UMaterialInstanceDynamic::K2_GetScalarParameterValue(const struct FName& ParameterName) {
}
	void UMaterialInstanceDynamic::K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source, bool bQuickParametersOnly) {
}
	void UMaterialInstanceDynamic::CopyParameterOverrides(class UMaterialInstance* MaterialInstance) {
}
	void UMaterialInstanceDynamic::CopyInterpParameters(class UMaterialInstance* Source) {
}
