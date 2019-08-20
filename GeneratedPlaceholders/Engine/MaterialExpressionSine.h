#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSine.generated.h"

UCLASS()
class UMaterialExpressionSine : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Period;


};