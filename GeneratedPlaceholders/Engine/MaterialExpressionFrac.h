#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFrac.generated.h"

UCLASS()
class UMaterialExpressionFrac : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};