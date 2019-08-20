#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTextureSampleParameter.generated.h"

UCLASS()
class UMaterialExpressionTextureSampleParameter : public UMaterialExpressionTextureSample
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ExpressionGUID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName Group;


};