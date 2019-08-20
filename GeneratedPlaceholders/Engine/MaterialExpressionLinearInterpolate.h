#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLinearInterpolate.generated.h"

UCLASS()
class UMaterialExpressionLinearInterpolate : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Alpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstAlpha;


};