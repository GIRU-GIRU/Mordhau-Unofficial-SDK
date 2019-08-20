#pragma once

#include "CoreMinimal.h"
#include "SoundNodeDelay.generated.h"

UCLASS()
class USoundNodeDelay : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DelayMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DelayMax;


};