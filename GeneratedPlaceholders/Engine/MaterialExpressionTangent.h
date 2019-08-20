#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTangent.generated.h"

UCLASS()
class UMaterialExpressionTangent : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Period;


};