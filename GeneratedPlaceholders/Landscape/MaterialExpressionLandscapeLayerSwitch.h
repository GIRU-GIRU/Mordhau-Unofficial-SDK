#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLandscapeLayerSwitch.generated.h"

UCLASS()
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput LayerUsed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput LayerNotUsed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char PreviewUsed : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ExpressionGUID;


};