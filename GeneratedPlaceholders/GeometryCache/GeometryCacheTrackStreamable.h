#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheTrackStreamable.generated.h"

UCLASS()
class UGeometryCacheTrackStreamable : public UGeometryCacheTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGeometryCacheCodecBase* Codec;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartSampleTime;


};