#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionVectorParameter.generated.h"

UCLASS()
class UMaterialExpressionVectorParameter : public UMaterialExpressionParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor DefaultValue;


};