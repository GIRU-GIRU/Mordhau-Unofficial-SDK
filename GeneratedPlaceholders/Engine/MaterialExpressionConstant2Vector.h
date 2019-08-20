#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionConstant2Vector.generated.h"

UCLASS()
class UMaterialExpressionConstant2Vector : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float R;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float G;


};