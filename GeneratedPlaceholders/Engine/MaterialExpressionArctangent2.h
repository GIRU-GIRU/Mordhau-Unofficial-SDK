#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArctangent2.generated.h"

UCLASS()
class UMaterialExpressionArctangent2 : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Y;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput X;


};