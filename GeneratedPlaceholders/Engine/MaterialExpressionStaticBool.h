#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionStaticBool.generated.h"

UCLASS()
class UMaterialExpressionStaticBool : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Value : 1;


};