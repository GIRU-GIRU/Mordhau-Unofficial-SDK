#pragma once

#include "CoreMinimal.h"
#include "AISense_Team.generated.h"

UCLASS()
class UAISense_Team : public UAISense
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAITeamStimulusEvent> RegisteredEvents;


};