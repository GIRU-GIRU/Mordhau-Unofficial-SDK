#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheTrack.generated.h"

UCLASS()
class UGeometryCacheTrack : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;


};