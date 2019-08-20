#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleParameterDynamic.generated.h"

UCLASS()
class UParticleModuleParameterDynamic : public UParticleModuleParameterBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEmitterDynamicParameter> DynamicParams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int UpdateFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsesVelocity : 1;


};