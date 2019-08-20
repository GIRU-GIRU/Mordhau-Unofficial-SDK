#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFmod.generated.h"

UCLASS()
class UMaterialExpressionFmod : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;


};