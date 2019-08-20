#pragma once

#include "CoreMinimal.h"
#include "MovieSceneSkeletalAnimationSection.generated.h"

UCLASS()
class UMovieSceneSkeletalAnimationSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneSkeletalAnimationParams Params;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequence* AnimSequence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase* Animation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EndOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReverse : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SlotName;


};