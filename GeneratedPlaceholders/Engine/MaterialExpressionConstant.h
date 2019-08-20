#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionConstant.generated.h"

UCLASS()
class UMaterialExpressionConstant : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float R;


};