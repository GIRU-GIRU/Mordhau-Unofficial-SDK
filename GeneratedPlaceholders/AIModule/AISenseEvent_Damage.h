#pragma once

#include "CoreMinimal.h"
#include "AISenseEvent_Damage.generated.h"

UCLASS()
class UAISenseEvent_Damage : public UAISenseEvent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAIDamageEvent Event;


};