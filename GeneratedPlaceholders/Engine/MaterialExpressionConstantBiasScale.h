#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionConstantBiasScale.generated.h"

UCLASS()
class UMaterialExpressionConstantBiasScale : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Bias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Scale;


};