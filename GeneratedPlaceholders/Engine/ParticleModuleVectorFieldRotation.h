#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldRotation.generated.h"

UCLASS()
class UParticleModuleVectorFieldRotation : public UParticleModuleVectorFieldBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MinInitialRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MaxInitialRotation;


};