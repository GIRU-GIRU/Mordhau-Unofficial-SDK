#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSquareRoot.generated.h"

UCLASS()
class UMaterialExpressionSquareRoot : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};