#pragma once

#include "CoreMinimal.h"
#include "MovieSceneByteTrack.generated.h"

UCLASS()
class UMovieSceneByteTrack : public UMovieScenePropertyTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnum* Enum;


};