#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleLocationPrimitiveSphere.generated.h"

UCLASS()
class UParticleModuleLocationPrimitiveSphere : public UParticleModuleLocationPrimitiveBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat StartRadius;


};