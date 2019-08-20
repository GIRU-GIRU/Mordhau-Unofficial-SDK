#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDesaturation.generated.h"

UCLASS()
class UMaterialExpressionDesaturation : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Fraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LuminanceFactors;


};