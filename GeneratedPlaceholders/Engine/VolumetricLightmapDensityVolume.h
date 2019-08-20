#pragma once

#include "CoreMinimal.h"
#include "VolumetricLightmapDensityVolume.generated.h"

UCLASS()
class AVolumetricLightmapDensityVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInt32Interval AllowedMipLevelRange;


};