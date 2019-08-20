#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleOrbitBase.generated.h"

UCLASS()
class UParticleModuleOrbitBase : public UParticleModule
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseEmitterTime : 1;


};