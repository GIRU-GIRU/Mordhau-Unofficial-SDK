#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionLightmassReplace.generated.h"

UCLASS()
class UMaterialExpressionLightmassReplace : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Realtime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Lightmass;


};