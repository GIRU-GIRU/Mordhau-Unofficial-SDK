#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionFontSampleParameter.generated.h"

UCLASS()
class UMaterialExpressionFontSampleParameter : public UMaterialExpressionFontSample
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