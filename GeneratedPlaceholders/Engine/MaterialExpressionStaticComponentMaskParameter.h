#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionStaticComponentMaskParameter.generated.h"

UCLASS()
class UMaterialExpressionStaticComponentMaskParameter : public UMaterialExpressionParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultR : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultG : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultB : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultA : 1;


};