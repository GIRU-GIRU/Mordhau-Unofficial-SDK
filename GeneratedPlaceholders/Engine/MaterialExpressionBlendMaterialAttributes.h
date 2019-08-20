#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionBlendMaterialAttributes.generated.h"

UCLASS()
class UMaterialExpressionBlendMaterialAttributes : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialAttributesInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialAttributesInput B;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Alpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialAttributeBlend> PixelAttributeBlendType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialAttributeBlend> VertexAttributeBlendType;


};