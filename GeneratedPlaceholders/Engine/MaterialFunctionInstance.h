#pragma once

#include "CoreMinimal.h"
#include "MaterialFunctionInstance.generated.h"

UCLASS()
class UMaterialFunctionInstance : public UMaterialFunctionInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialFunctionInterface* Parent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialFunctionInterface* Base;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FScalarParameterValue> ScalarParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVectorParameterValue> VectorParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTextureParameterValue> TextureParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFontParameterValue> FontParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FStaticSwitchParameter> StaticSwitchParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameterValues;


};