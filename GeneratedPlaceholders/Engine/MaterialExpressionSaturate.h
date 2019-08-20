#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSaturate.generated.h"

UCLASS()
class UMaterialExpressionSaturate : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};