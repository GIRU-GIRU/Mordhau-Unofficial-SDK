#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionConstant4Vector.generated.h"

UCLASS()
class UMaterialExpressionConstant4Vector : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor Constant;


};