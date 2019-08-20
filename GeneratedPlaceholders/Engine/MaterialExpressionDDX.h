#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDDX.generated.h"

UCLASS()
class UMaterialExpressionDDX : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Value;


};