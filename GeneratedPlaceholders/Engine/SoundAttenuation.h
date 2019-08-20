#pragma once

#include "CoreMinimal.h"
#include "SoundAttenuation.generated.h"

UCLASS()
class USoundAttenuation : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundAttenuationSettings Attenuation;


};