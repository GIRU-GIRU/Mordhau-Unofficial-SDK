#pragma once

#include "CoreMinimal.h"
#include "ForceFeedbackAttenuation.generated.h"

UCLASS()
class UForceFeedbackAttenuation : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FForceFeedbackAttenuationSettings Attenuation;


};