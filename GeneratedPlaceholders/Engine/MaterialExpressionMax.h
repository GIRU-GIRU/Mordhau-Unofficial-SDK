#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionMax.generated.h"

UCLASS()
class UMaterialExpressionMax : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstA;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstB;


};