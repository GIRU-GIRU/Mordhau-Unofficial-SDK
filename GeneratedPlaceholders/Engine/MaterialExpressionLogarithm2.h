#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLogarithm2.generated.h"

UCLASS()
class UMaterialExpressionLogarithm2 : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput X;


};