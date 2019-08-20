#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionAbs.generated.h"

UCLASS()
class UMaterialExpressionAbs : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};