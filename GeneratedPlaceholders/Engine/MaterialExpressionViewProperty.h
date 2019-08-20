#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionViewProperty.generated.h"

UCLASS()
class UMaterialExpressionViewProperty : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialExposedViewProperty> Property;


};