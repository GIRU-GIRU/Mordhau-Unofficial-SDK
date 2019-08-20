#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionAntialiasedTextureMask.generated.h"

UCLASS()
class UMaterialExpressionAntialiasedTextureMask : public UMaterialExpressionTextureSampleParameter2D
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Threshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureColorChannel> Channel;


};