#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTangentOutput.generated.h"

UCLASS()
class UMaterialExpressionTangentOutput : public UMaterialExpressionCustomOutput
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};