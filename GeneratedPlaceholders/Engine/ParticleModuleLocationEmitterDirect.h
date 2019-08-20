#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationEmitterDirect.generated.h"

UCLASS()
class UParticleModuleLocationEmitterDirect : public UParticleModuleLocationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName EmitterName;


};