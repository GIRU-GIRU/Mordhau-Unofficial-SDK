#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArctangent2Fast.generated.h"

UCLASS()
class UMaterialExpressionArctangent2Fast : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Y;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput X;


};