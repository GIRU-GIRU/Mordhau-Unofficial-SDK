#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTextureSampleParameterSubUV.generated.h"

UCLASS()
class UMaterialExpressionTextureSampleParameterSubUV : public UMaterialExpressionTextureSampleParameter2D
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBlend : 1;


};