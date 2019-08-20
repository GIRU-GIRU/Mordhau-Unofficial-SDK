#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSubSection.generated.h"

UCLASS()
class UMovieSceneSubSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneSectionParameters Parameters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TimeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PrerollTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMovieSceneSequence* SubSequence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TLazyObjectPtr<class AActor> ActorToRecord;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TargetSequenceName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDirectoryPath TargetPathToRecordTo;


};