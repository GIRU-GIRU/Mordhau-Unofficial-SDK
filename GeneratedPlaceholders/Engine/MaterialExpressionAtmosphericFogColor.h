#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionAtmosphericFogColor.generated.h"

UCLASS()
class UMaterialExpressionAtmosphericFogColor : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput WorldPosition;


};