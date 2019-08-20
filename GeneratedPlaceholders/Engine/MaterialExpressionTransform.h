#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTransform.generated.h"

UCLASS()
class UMaterialExpressionTransform : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialVectorCoordTransformSource> TransformSourceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialVectorCoordTransform> TransformType;


};