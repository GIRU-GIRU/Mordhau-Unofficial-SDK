#pragma once

#include "CoreMinimal.h"
#include "MovieScene.generated.h"

UCLASS()
class UMovieScene : public UMovieSceneSignedObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMovieSceneSpawnable> Spawnables;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMovieScenePossessable> Possessables;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMovieSceneBinding> ObjectBindings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneTrack*> MasterTracks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieSceneTrack* CameraCutTrack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFrameRange SelectionRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFrameRange PlaybackRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFrameRate TickResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFrameRate DisplayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMovieSceneEvaluationType EvaluationType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EUpdateClockSource ClockSource;


};