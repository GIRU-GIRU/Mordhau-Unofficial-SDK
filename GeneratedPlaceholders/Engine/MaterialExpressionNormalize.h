#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionNormalize.generated.h"

UCLASS()
class UMaterialExpressionNormalize : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput VectorInput;


};