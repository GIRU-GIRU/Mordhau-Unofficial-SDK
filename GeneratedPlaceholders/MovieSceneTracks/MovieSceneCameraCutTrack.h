#pragma once

#include "CoreMinimal.h"
#include "MovieSceneCameraCutTrack.generated.h"

UCLASS()
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;


};