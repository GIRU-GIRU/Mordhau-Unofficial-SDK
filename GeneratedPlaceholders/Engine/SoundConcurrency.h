#pragma once

#include "CoreMinimal.h"
#include "SoundConcurrency.generated.h"

UCLASS()
class USoundConcurrency : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundConcurrencySettings Concurrency;


};