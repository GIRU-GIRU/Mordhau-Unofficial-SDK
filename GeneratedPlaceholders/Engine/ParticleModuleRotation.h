#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleRotation.generated.h"

UCLASS()
class UParticleModuleRotation : public UParticleModuleRotationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat StartRotation;


};