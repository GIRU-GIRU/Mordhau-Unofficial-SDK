#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionQualitySwitch.generated.h"

UCLASS()
class UMaterialExpressionQualitySwitch : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Default;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Inputs[0x3];


};