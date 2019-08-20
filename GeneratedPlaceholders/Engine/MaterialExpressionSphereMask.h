#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSphereMask.generated.h"

UCLASS()
class UMaterialExpressionSphereMask : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput A;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput B;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Radius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Hardness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AttenuationRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HardnessPercent;


};