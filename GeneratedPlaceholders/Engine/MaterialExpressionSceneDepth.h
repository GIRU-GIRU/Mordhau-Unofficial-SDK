#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSceneDepth.generated.h"

UCLASS()
class UMaterialExpressionSceneDepth : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialSceneAttributeInputMode> InputMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Input;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Coordinates;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D ConstInput;


};