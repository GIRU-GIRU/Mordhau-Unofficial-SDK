#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionPreviousFrameSwitch.generated.h"

UCLASS()
class UMaterialExpressionPreviousFrameSwitch : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput CurrentFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput PreviousFrame;


};