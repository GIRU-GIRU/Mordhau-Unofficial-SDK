#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionPanner.generated.h"

UCLASS()
class UMaterialExpressionPanner : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Coordinate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Time;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Speed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpeedX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpeedY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ConstCoordinate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bFractionalPart;


};