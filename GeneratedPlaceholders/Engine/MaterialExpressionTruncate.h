#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTruncate.generated.h"

UCLASS()
class UMaterialExpressionTruncate : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};