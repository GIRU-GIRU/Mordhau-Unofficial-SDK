#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCameraAnimTrack.generated.h"

UCLASS()
class UMovieSceneCameraAnimTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> CameraAnimSections;


};