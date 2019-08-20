#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionGetMaterialAttributes.generated.h"

UCLASS()
class UMaterialExpressionGetMaterialAttributes : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialAttributesInput MaterialAttributes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGuid> AttributeGetTypes;


};