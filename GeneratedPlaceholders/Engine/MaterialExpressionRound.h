#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionRound.generated.h"

UCLASS()
class UMaterialExpressionRound : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};