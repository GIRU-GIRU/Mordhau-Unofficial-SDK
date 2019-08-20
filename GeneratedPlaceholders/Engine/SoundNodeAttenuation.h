#pragma once

#include "CoreMinimal.h"
#include "SoundNodeAttenuation.generated.h"

UCLASS()
class USoundNodeAttenuation : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* AttenuationSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundAttenuationSettings AttenuationOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideAttenuation : 1;


};