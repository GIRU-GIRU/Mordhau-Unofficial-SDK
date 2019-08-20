#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleOrientationAxisLock.generated.h"

UCLASS()
class UParticleModuleOrientationAxisLock : public UParticleModuleOrientationBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleAxisLock> LockAxisFlags;


};