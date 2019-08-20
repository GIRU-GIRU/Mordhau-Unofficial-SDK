#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLandscapeVisibilityMask.generated.h"

UCLASS()
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ExpressionGUID;


};