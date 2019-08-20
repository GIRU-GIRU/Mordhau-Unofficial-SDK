#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFeatureLevelSwitch.generated.h"

UCLASS()
class UMaterialExpressionFeatureLevelSwitch : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Default;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Inputs[0x4];


};