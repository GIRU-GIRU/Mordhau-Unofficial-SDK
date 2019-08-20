#pragma once

#include "CoreMinimal.h"
#include "SoundNodeLooping.generated.h"

UCLASS()
class USoundNodeLooping : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LoopCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLoopIndefinitely : 1;


};