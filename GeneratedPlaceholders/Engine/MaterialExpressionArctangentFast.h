#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArctangentFast.generated.h"

UCLASS()
class UMaterialExpressionArctangentFast : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};