#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionGIReplace.generated.h"

UCLASS()
class UMaterialExpressionGIReplace : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Default;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput StaticIndirect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput DynamicIndirect;


};