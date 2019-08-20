#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDistanceToNearestSurface.generated.h"

UCLASS()
class UMaterialExpressionDistanceToNearestSurface : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Position;


};