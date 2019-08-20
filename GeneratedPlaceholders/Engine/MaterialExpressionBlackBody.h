#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionBlackBody.generated.h"

UCLASS()
class UMaterialExpressionBlackBody : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Temp;


};