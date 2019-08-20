#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFresnel.generated.h"

UCLASS()
class UMaterialExpressionFresnel : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput ExponentIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Exponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput BaseReflectFractionIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BaseReflectFraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Normal;


};