#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionCeil.generated.h"

UCLASS()
class UMaterialExpressionCeil : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};