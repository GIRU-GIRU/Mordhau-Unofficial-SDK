#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLogarithm10.generated.h"

UCLASS()
class UMaterialExpressionLogarithm10 : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput X;


};