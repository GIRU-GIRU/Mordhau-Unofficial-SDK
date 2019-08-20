#pragma once

#include "CoreMinimal.h"
#include "AISense_Touch.generated.h"

UCLASS()
class UAISense_Touch : public UAISense
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAITouchEvent> RegisteredEvents;


};