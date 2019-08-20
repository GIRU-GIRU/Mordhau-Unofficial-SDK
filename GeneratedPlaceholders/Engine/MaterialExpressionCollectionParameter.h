#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionCollectionParameter.generated.h"

UCLASS()
class UMaterialExpressionCollectionParameter : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialParameterCollection* Collection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName ParameterName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ParameterId;


};