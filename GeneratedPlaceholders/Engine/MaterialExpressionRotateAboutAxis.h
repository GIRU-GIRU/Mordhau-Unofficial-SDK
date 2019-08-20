#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionRotateAboutAxis.generated.h"

UCLASS()
class UMaterialExpressionRotateAboutAxis : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput NormalizedRotationAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput RotationAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput PivotPoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Position;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Period;


};