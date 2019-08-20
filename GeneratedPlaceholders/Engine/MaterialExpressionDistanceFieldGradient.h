#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDistanceFieldGradient.generated.h"

UCLASS()
class UMaterialExpressionDistanceFieldGradient : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Position;


};