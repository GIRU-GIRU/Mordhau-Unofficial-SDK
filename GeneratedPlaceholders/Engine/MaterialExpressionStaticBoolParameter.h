#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionStaticBoolParameter.generated.h"

UCLASS()
class UMaterialExpressionStaticBoolParameter : public UMaterialExpressionParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultValue : 1;


};