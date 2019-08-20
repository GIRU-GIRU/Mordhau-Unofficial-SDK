#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleColorScaleOverLife.generated.h"

UCLASS()
class UParticleModuleColorScaleOverLife : public UParticleModuleColorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector ColorScaleOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat AlphaScaleOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEmitterTime : 1;


};