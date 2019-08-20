#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionBentNormalCustomOutput.generated.h"

UCLASS()
class UMaterialExpressionBentNormalCustomOutput : public UMaterialExpressionCustomOutput
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};