#pragma once

#include "CoreMinimal.h"
#include "MaterialInstanceDynamic.generated.h"

UCLASS()
class UMaterialInstanceDynamic : public UMaterialInstance
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
	void SetVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		void SetTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		void SetScalarParameterValue(const struct FName& ParameterName, float Value);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		void K2_InterpolateMaterialInstanceParams(class UMaterialInstance* SourceA, class UMaterialInstance* SourceB, float Alpha);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		struct FLinearColor K2_GetVectorParameterValue(const struct FName& ParameterName);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		class UTexture* K2_GetTextureParameterValue(const struct FName& ParameterName);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		float K2_GetScalarParameterValue(const struct FName& ParameterName);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		void K2_CopyMaterialInstanceParameters(class UMaterialInterface* Source, bool bQuickParametersOnly);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		void CopyParameterOverrides(class UMaterialInstance* MaterialInstance);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceDynamic")
		void CopyInterpParameters(class UMaterialInstance* Source);

};