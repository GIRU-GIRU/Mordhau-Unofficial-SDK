#pragma once

#include "CoreMinimal.h"
#include "BTTask_PlaySound.generated.h"

UCLASS()
class UBTTask_PlaySound : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* SoundToPlay;


};