#pragma once

#include "CoreMinimal.h"
#include "MovieScene3DTransformSection.generated.h"

UCLASS()
class UMovieScene3DTransformSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneTransformMask TransformMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Translation[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Rotation[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Scale[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel ManualWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseQuaternionInterpolation;


};