#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFloor.generated.h"

UCLASS()
class UMaterialExpressionFloor : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};