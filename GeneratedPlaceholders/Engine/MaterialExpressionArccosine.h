#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArccosine.generated.h"

UCLASS()
class UMaterialExpressionArccosine : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};