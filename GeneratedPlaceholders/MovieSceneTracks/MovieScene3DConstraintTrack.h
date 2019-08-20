#pragma once

#include "CoreMinimal.h"
#include "MovieScene3DConstraintTrack.generated.h"

UCLASS()
class UMovieScene3DConstraintTrack : public UMovieSceneTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> ConstraintSections;


};