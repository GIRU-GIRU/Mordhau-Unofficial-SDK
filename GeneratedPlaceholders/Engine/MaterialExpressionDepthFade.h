#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionDepthFade.generated.h"

UCLASS()
class UMaterialExpressionDepthFade : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput InOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput FadeDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OpacityDefault;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FadeDistanceDefault;


};