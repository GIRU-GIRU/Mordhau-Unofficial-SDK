#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleColorOverLife.generated.h"

UCLASS()
class UParticleModuleColorOverLife : public UParticleModuleColorBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector ColorOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat AlphaOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClampAlpha : 1;


};