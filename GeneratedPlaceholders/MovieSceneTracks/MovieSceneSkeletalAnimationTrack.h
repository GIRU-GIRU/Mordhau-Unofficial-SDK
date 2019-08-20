#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSkeletalAnimationTrack.generated.h"

UCLASS()
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> AnimationSections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseLegacySectionIndexBlend;


};