#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionReroute.generated.h"

UCLASS()
class UMaterialExpressionReroute : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;


};