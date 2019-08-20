#pragma once

#include "CoreMinimal.h"
#include "LevelSequencePlayer.generated.h"

UCLASS()
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnCameraCut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> AdditionalEventReceivers;

	UFUNCTION(BlueprintCallable, Category = "LevelSequencePlayer")
	class ULevelSequencePlayer* STATIC_CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);

};