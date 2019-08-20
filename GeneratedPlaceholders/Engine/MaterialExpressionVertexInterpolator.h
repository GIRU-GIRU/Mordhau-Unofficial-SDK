#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionVertexInterpolator.generated.h"

UCLASS()
class UMaterialExpressionVertexInterpolator : public UMaterialExpressionCustomOutput
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};