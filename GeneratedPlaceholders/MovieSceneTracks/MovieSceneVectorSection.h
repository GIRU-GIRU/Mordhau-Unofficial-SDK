#pragma once

#include "CoreMinimal.h"
#include "MovieSceneVectorSection.generated.h"

UCLASS()
class UMovieSceneVectorSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel Curves[0x4];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ChannelsUsed;


};