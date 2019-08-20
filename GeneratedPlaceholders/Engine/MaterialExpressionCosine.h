#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionCosine.generated.h"

UCLASS()
class UMaterialExpressionCosine : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Period;


};