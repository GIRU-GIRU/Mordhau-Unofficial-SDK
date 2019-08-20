#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSpawnTrack.generated.h"

UCLASS()
class UMovieSceneSpawnTrack : public UMovieSceneTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid ObjectGuid;


};