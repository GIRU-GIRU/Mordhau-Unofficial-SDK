#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleMeshRotation.generated.h"

UCLASS()
class UParticleModuleMeshRotation : public UParticleModuleRotationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector StartRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritParent : 1;


};