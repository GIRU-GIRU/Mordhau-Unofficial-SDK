#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDeriveNormalZ.generated.h"

UCLASS()
class UMaterialExpressionDeriveNormalZ : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput InXY;


};