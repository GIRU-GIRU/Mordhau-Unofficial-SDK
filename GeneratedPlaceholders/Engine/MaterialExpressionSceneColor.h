#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSceneColor.generated.h"

UCLASS()
class UMaterialExpressionSceneColor : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialSceneAttributeInputMode> InputMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput OffsetFraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ConstInput;


};