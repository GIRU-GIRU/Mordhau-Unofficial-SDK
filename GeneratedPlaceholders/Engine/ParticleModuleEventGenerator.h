#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleEventGenerator.generated.h"

UCLASS()
class UParticleModuleEventGenerator : public UParticleModuleEventBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FParticleEvent_GenerateInfo> Events;


};