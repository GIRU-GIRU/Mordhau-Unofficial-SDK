#pragma once

#include "CoreMinimal.h"
#include "SoundNodeDialoguePlayer.generated.h"

UCLASS()
class USoundNodeDialoguePlayer : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDialogueWaveParameter DialogueWaveParameter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLooping : 1;


};