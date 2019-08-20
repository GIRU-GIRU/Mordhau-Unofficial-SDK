#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTextureSample.generated.h"

UCLASS()
class UMaterialExpressionTextureSample : public UMaterialExpressionTextureBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Coordinates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput TextureObject;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput MipValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput CoordinatesDX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput CoordinatesDY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput AutomaticViewMipBiasValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureMipValueMode> MipValueMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESamplerSourceMode> SamplerSource;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ConstCoordinate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ConstMipValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AutomaticViewMipBias : 1;


};