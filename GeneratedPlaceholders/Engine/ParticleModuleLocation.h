#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocation.generated.h"

UCLASS()
class UParticleModuleLocation : public UParticleModuleLocationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector StartLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistributeOverNPoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistributeThreshold;


};