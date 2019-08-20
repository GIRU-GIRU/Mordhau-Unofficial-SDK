#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleKillHeight.generated.h"

UCLASS()
class UParticleModuleKillHeight : public UParticleModuleKillBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Height;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbsolute : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFloor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyPSysScale : 1;


};