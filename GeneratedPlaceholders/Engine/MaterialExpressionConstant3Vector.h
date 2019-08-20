#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionConstant3Vector.generated.h"

UCLASS()
class UMaterialExpressionConstant3Vector : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor Constant;


};