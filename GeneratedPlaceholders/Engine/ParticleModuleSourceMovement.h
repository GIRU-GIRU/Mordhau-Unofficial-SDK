#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSourceMovement.generated.h"

UCLASS()
class UParticleModuleSourceMovement : public UParticleModuleLocationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector SourceMovementScale;


};