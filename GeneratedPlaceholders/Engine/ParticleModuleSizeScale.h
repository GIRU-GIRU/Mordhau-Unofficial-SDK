#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSizeScale.generated.h"

UCLASS()
class UParticleModuleSizeScale : public UParticleModuleSizeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector SizeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char EnableX : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char EnableY : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char EnableZ : 1;


};