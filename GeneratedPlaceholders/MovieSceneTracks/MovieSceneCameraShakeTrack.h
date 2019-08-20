#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCameraShakeTrack.generated.h"

UCLASS()
class UMovieSceneCameraShakeTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> CameraShakeSections;


};