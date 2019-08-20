#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSegmentCompilerTestTrack.generated.h"

UCLASS()
class UMovieSceneSegmentCompilerTestTrack : public UMovieSceneTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHighPassFilter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> SectionArray;


};