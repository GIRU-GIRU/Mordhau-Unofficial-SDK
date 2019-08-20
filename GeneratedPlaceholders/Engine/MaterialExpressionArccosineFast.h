#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionArccosineFast.generated.h"

UCLASS()
class UMaterialExpressionArccosineFast : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};