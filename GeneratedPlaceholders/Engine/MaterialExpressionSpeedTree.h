#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSpeedTree.generated.h"

UCLASS()
class UMaterialExpressionSpeedTree : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput GeometryInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput WindInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput LODInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput ExtraBendWS;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESpeedTreeGeometryType> GeometryType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESpeedTreeWindType> WindType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESpeedTreeLODType> LODType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BillboardThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAccurateWindVelocities;


};