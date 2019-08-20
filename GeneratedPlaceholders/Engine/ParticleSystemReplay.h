#pragma once

#include "CoreMinimal.h"
#include "ParticleSystemReplay.generated.h"

UCLASS()
class UParticleSystemReplay : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ClipIDNumber;


};