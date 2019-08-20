#pragma once

#include "CoreMinimal.h"
#include "BaseMediaSource.generated.h"

UCLASS()
class UBaseMediaSource : public UMediaSource
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PlayerName;


};