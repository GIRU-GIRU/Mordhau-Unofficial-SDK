#pragma once

#include "CoreMinimal.h"
#include "MaterialInstanceConstant.generated.h"

UCLASS()
class UMaterialInstanceConstant : public UMaterialInstance
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceConstant")
	struct FLinearColor K2_GetVectorParameterValue(const struct FName& ParameterName);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceConstant")
		class UTexture* K2_GetTextureParameterValue(const struct FName& ParameterName);
	UFUNCTION(BlueprintCallable, Category = "MaterialInstanceConstant")
		float K2_GetScalarParameterValue(const struct FName& ParameterName);

};