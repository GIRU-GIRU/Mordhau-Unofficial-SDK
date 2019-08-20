#pragma once

#include "CoreMinimal.h"
#include "MovieSceneEnumTrack.generated.h"

UCLASS()
class UMovieSceneEnumTrack : public UMovieScenePropertyTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEnum* Enum;


};