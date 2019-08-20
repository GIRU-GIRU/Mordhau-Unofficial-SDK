#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArctangent.generated.h"

UCLASS()
class UMaterialExpressionArctangent : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};