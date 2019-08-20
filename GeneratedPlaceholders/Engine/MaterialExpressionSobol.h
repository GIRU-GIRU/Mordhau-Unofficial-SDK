#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSobol.generated.h"

UCLASS()
class UMaterialExpressionSobol : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Cell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Index;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Seed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ConstIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ConstSeed;


};