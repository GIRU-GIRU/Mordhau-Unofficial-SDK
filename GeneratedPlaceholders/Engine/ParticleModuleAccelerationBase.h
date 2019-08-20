#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleAccelerationBase.generated.h"

UCLASS()
class UParticleModuleAccelerationBase : public UParticleModule
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysInWorldSpace : 1;


};