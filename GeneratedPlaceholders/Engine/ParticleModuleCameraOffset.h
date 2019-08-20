#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleCameraOffset.generated.h"

UCLASS()
class UParticleModuleCameraOffset : public UParticleModuleCameraBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat CameraOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSpawnTimeOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleCameraOffsetUpdateMethod> UpdateMethod;


};