#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionChannelMaskParameter.generated.h"

UCLASS()
class UMaterialExpressionChannelMaskParameter : public UMaterialExpressionVectorParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EChannelMaskParameterColor> MaskChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};