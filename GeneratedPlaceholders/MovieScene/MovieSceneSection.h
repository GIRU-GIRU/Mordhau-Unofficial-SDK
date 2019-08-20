#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSection.generated.h"

UCLASS()
class UMovieSceneSection : public UMovieSceneSignedObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneSectionEvalOptions EvalOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneEasingSettings Easing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFrameRange SectionRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFrameNumber PreRollFrames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFrameNumber PostRollFrames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RowIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OverlapPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsActive : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsLocked : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EndTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PrerollTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PostrollTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsInfinite : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSupportsInfiniteRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FOptionalMovieSceneBlendType BlendType;


};