#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionSphericalParticleOpacity.generated.h"

UCLASS()
class UMaterialExpressionSphericalParticleOpacity : public UMaterialExpression
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FExpressionInput Density;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ConstantDensity;


};