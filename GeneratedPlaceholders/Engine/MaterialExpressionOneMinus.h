#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionOneMinus.generated.h"

UCLASS()
class UMaterialExpressionOneMinus : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};