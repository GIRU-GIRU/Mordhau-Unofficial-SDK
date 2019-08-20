#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionParameter.generated.h"

UCLASS()
class UMaterialExpressionParameter : public UMaterialExpression
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