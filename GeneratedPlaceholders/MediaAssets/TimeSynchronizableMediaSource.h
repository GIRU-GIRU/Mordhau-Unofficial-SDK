#pragma once

#include "CoreMinimal.h"
#include "TimeSynchronizableMediaSource.generated.h"

UCLASS()
class UTimeSynchronizableMediaSource : public UBaseMediaSource
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseTimeSynchronization;


};