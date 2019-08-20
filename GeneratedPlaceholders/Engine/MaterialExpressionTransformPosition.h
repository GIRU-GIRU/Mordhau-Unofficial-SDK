#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTransformPosition.generated.h"

UCLASS()
class UMaterialExpressionTransformPosition : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialPositionTransformSource> TransformSourceType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialPositionTransformSource> TransformType;


};