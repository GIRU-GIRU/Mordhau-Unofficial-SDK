#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVelocityOverLifetime.generated.h"

UCLASS()
class UParticleModuleVelocityOverLifetime : public UParticleModuleVelocityBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector VelOverLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Absolute : 1;


};