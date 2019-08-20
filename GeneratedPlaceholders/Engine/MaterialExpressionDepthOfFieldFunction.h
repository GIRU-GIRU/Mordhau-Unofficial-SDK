#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDepthOfFieldFunction.generated.h"

UCLASS()
class UMaterialExpressionDepthOfFieldFunction : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDepthOfFieldFunctionValue> FunctionValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Depth;


};