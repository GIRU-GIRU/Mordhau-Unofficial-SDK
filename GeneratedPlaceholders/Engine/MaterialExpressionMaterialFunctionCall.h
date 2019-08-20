#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionMaterialFunctionCall.generated.h"

UCLASS()
class UMaterialExpressionMaterialFunctionCall : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialFunctionInterface* MaterialFunction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialParameterInfo FunctionParameterInfo;


};