#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDotProduct.generated.h"

UCLASS()
class UMaterialExpressionDotProduct : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;


};