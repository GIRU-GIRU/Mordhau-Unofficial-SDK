#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionBumpOffset.generated.h"

UCLASS()
class UMaterialExpressionBumpOffset : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Coordinate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Height;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput HeightRatioInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeightRatio;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReferencePlane;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ConstCoordinate;


};