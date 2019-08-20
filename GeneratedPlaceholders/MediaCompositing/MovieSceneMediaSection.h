#pragma once

#include "CoreMinimal.h"
#include "MovieSceneMediaSection.generated.h"

UCLASS()
class UMovieSceneMediaSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Proxy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMediaSoundComponent* MediaSoundComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMediaTexture* MediaTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMediaSource* MediaSource;


};