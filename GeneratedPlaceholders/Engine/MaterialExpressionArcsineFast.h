#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArcsineFast.generated.h"

UCLASS()
class UMaterialExpressionArcsineFast : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};