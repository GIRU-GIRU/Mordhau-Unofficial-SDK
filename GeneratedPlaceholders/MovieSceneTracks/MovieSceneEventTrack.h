#pragma once

#include "CoreMinimal.h"
#include "MovieSceneEventTrack.generated.h"

UCLASS()
class UMovieSceneEventTrack : public UMovieSceneNameableTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenForwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFireEventsWhenBackwards : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFireEventsAtPosition EventPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMovieSceneObjectBindingID> EventReceivers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMovieSceneSection*> Sections;


};