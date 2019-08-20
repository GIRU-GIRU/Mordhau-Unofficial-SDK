#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDDY.generated.h"

UCLASS()
class UMaterialExpressionDDY : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Value;


};