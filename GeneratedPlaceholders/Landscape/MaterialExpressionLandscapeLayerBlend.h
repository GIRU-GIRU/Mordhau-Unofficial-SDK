#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLandscapeLayerBlend.generated.h"

UCLASS()
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLayerBlendInput> Layers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ExpressionGUID;


};