#pragma once

#include "CoreMinimal.h"
#include "MovieSceneFadeSection.generated.h"

UCLASS()
class UMovieSceneFadeSection : public UMovieSceneFloatSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor FadeColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFadeAudio : 1;


};