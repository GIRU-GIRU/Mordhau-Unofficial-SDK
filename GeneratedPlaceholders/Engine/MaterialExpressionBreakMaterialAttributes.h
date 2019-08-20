#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionBreakMaterialAttributes.generated.h"

UCLASS()
class UMaterialExpressionBreakMaterialAttributes : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialAttributesInput MaterialAttributes;


};