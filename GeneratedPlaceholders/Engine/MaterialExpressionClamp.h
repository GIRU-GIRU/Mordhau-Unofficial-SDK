#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionClamp.generated.h"

UCLASS()
class UMaterialExpressionClamp : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Min;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Max;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EClampMode> ClampMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDefault;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDefault;


};