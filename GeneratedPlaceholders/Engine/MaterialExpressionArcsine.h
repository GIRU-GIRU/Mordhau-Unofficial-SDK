#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArcsine.generated.h"

UCLASS()
class UMaterialExpressionArcsine : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};