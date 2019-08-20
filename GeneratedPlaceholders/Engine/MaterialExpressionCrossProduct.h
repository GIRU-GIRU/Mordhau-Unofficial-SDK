#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionCrossProduct.generated.h"

UCLASS()
class UMaterialExpressionCrossProduct : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;


};