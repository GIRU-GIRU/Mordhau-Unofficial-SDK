#pragma once

#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.generated.h"

UCLASS()
class UMovieScenePropertyTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PropertyName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString PropertyPath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;


};