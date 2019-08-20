#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldRotationRate.generated.h"

UCLASS()
class UParticleModuleVectorFieldRotationRate : public UParticleModuleVectorFieldBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RotationRate;


};