#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleEventReceiverKillParticles.generated.h"

UCLASS()
class UParticleModuleEventReceiverKillParticles : public UParticleModuleEventReceiverBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStopSpawning : 1;


};