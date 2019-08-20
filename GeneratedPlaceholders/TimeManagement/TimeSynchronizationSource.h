#pragma once

#include "CoreMinimal.h"
#include "TimeSynchronizationSource.generated.h"

UCLASS()
class UTimeSynchronizationSource : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseForSynchronization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumberOfExtraBufferedFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeDelay;


};