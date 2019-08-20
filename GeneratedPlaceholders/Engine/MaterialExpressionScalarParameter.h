#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionScalarParameter.generated.h"

UCLASS()
class UMaterialExpressionScalarParameter : public UMaterialExpressionParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SliderMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SliderMax;


};