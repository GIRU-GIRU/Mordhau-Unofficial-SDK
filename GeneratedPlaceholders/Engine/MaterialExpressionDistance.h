#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDistance.generated.h"

UCLASS()
class UMaterialExpressionDistance : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;


};