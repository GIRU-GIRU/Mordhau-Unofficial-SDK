#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionClearCoatNormalCustomOutput.generated.h"

UCLASS()
class UMaterialExpressionClearCoatNormalCustomOutput : public UMaterialExpressionCustomOutput
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};