#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTextureBase.generated.h"

UCLASS()
class UMaterialExpressionTextureBase : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture* Texture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialSamplerType> SamplerType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char IsDefaultMeshpaintTexture : 1;


};