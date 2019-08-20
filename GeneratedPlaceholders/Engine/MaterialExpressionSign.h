#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSign.generated.h"

UCLASS()
class UMaterialExpressionSign : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};