#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionCurveAtlasRowParameter.generated.h"

UCLASS()
class UMaterialExpressionCurveAtlasRowParameter : public UMaterialExpressionScalarParameter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveLinearColor* Curve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveLinearColorAtlas* Atlas;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput InputTime;


};