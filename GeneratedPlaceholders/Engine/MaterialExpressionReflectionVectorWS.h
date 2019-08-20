#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionReflectionVectorWS.generated.h"

UCLASS()
class UMaterialExpressionReflectionVectorWS : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput CustomWorldNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNormalizeCustomWorldNormal : 1;


};