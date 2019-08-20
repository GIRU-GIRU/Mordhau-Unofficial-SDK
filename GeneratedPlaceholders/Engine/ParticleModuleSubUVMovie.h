#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSubUVMovie.generated.h"

UCLASS()
class UParticleModuleSubUVMovie : public UParticleModuleSubUV
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseEmitterTime : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat FrameRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StartingFrame;


};