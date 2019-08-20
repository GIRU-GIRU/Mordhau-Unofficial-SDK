#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleTypeDataGpu.generated.h"

UCLASS()
class UParticleModuleTypeDataGpu : public UParticleModuleTypeDataBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGPUSpriteEmitterInfo EmitterInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGPUSpriteResourceData ResourceData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraMotionBlurAmount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClearExistingParticlesOnInit : 1;


};