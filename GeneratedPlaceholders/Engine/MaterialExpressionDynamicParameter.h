#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDynamicParameter.generated.h"

UCLASS()
class UMaterialExpressionDynamicParameter : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ParamNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor DefaultValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ParameterIndex;


};