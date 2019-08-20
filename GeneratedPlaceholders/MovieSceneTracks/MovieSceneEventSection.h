#pragma once

#include "CoreMinimal.h"
#include "MovieSceneEventSection.generated.h"

UCLASS()
class UMovieSceneEventSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNameCurve Events;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneEventSectionData EventData;


};