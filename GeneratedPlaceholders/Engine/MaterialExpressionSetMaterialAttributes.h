#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSetMaterialAttributes.generated.h"

UCLASS()
class UMaterialExpressionSetMaterialAttributes : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FExpressionInput> Inputs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGuid> AttributeSetTypes;


};