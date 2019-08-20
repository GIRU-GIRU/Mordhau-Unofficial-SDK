#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionRotator.generated.h"

UCLASS()
class UMaterialExpressionRotator : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Coordinate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Time;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CenterX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CenterY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Speed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ConstCoordinate;


};