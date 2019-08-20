#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionAppendVector.generated.h"

UCLASS()
class UMaterialExpressionAppendVector : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;


};