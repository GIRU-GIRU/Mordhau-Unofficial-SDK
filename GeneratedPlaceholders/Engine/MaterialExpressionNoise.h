#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionNoise.generated.h"

UCLASS()
class UMaterialExpressionNoise : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Position;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput FilterWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Scale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Quality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENoiseFunction> NoiseFunction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTurbulence : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Levels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OutputMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OutputMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LevelScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTiling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t RepeatSize;


};