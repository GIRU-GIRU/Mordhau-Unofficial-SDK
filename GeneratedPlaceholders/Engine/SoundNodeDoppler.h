#pragma once

#include "CoreMinimal.h"
#include "SoundNodeDoppler.generated.h"

UCLASS()
class USoundNodeDoppler : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DopplerIntensity;


};