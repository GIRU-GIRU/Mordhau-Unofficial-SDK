#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLandscapeLayerWeight.generated.h"

UCLASS()
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Base;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Layer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PreviewWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ConstBase;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ExpressionGUID;


};