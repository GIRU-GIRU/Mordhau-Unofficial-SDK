#pragma once

#include "CoreMinimal.h"
#include "VoipListenerSynthComponent.generated.h"

UCLASS()
class UVoipListenerSynthComponent : public USynthComponent
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "VoipListenerSynthComponent")
	bool IsIdling();

};