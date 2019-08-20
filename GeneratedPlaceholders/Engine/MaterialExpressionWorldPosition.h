#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionWorldPosition.generated.h"

UCLASS()
class UMaterialExpressionWorldPosition : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EWorldPositionIncludedOffsets> WorldPositionShaderOffset;


};