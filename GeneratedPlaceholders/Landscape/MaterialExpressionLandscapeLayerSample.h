#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLandscapeLayerSample.generated.h"

UCLASS()
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PreviewWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ExpressionGUID;


};