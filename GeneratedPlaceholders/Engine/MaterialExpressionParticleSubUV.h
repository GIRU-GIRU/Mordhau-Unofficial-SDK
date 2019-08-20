#pragma once

#include "CoreMinimal.h"
#include "MaterialExpressionParticleSubUV.generated.h"

UCLASS()
class UMaterialExpressionParticleSubUV : public UMaterialExpressionTextureSample
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBlend : 1;


};