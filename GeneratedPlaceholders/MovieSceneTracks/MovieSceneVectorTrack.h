#pragma once

#include "CoreMinimal.h"
#include "MovieSceneVectorTrack.generated.h"

UCLASS()
class UMovieSceneVectorTrack : public UMovieScenePropertyTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumChannelsUsed;


};