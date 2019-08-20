#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionPower.generated.h"

UCLASS()
class UMaterialExpressionPower : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Base;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Exponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstExponent;


};