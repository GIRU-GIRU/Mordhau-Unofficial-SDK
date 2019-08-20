#pragma once

#include "CoreMinimal.h"
#include "MovieScene2DTransformSection.generated.h"

UCLASS()
class UMovieScene2DTransformSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieScene2DTransformMask TransformMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Translation[0x2];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Rotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Scale[0x2];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Shear[0x2];


};