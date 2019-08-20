#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSpawnBase.generated.h"

UCLASS()
class UParticleModuleSpawnBase : public UParticleModule
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProcessSpawnRate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProcessBurstList : 1;


};