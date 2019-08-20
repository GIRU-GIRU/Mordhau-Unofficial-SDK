#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionTime.generated.h"

UCLASS()
class UMaterialExpressionTime : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnorePause : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_Period : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Period;


};