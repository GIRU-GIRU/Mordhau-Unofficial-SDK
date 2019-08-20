#pragma once

#include "CoreMinimal.h"
#include "StreamMediaSource.generated.h"

UCLASS()
class UStreamMediaSource : public UBaseMediaSource
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString StreamUrl;


};