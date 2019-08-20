#pragma once

#include "CoreMinimal.h"
#include "LightPropagationVolumeBlendable.generated.h"

UCLASS()
class ULightPropagationVolumeBlendable : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightPropagationVolumeSettings Settings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BlendWeight;


};