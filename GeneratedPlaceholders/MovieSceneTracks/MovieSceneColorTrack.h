#pragma once

#include "CoreMinimal.h"
#include "MovieSceneColorTrack.generated.h"

UCLASS()
class UMovieSceneColorTrack : public UMovieScenePropertyTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsSlateColor;


};