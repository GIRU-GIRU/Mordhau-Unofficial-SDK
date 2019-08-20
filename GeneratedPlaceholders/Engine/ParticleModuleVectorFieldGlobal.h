#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldGlobal.generated.h"

UCLASS()
class UParticleModuleVectorFieldGlobal : public UParticleModuleVectorFieldBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideGlobalVectorFieldTightness : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GlobalVectorFieldScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GlobalVectorFieldTightness;


};