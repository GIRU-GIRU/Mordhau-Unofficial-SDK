#pragma once

#include "CoreMinimal.h"
#include "AISenseEvent_Hearing.generated.h"

UCLASS()
class UAISenseEvent_Hearing : public UAISenseEvent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAINoiseEvent Event;


};