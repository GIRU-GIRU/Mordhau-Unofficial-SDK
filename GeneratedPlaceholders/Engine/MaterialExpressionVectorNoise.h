#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionVectorNoise.generated.h"

UCLASS()
class UMaterialExpressionVectorNoise : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Position;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVectorNoiseFunction> NoiseFunction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Quality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTiling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t TileSize;


};