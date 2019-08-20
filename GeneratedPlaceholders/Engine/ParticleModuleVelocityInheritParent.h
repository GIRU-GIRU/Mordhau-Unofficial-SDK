#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVelocityInheritParent.generated.h"

UCLASS()
class UParticleModuleVelocityInheritParent : public UParticleModuleVelocityBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector Scale;


};