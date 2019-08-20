#pragma once

#include "CoreMinimal.h"
#include "EmoteSwitcherMotion.generated.h"

UCLASS()
class UEmoteSwitcherMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char SwitchToID;


};