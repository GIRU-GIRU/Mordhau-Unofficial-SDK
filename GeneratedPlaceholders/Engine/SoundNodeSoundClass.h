#pragma once

#include "CoreMinimal.h"
#include "SoundNodeSoundClass.generated.h"

UCLASS()
class USoundNodeSoundClass : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundClass* SoundClassOverride;


};