#pragma once

#include "CoreMinimal.h"
#include "PlatformMediaSource.generated.h"

UCLASS()
class UPlatformMediaSource : public UMediaSource
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMediaSource* MediaSource;


};