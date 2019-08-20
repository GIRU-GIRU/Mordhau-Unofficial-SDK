#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVelocityBase.generated.h"

UCLASS()
class UParticleModuleVelocityBase : public UParticleModule
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInWorldSpace : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyOwnerScale : 1;


};