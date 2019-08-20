#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleSubUV.generated.h"

UCLASS()
class UParticleModuleSubUV : public UParticleModuleSubUVBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USubUVAnimation* Animation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat SubImageIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseRealTime : 1;


};