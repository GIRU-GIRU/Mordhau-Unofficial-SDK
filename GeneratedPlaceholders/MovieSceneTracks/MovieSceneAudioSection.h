#pragma once

#include "CoreMinimal.h"
#include "MovieSceneAudioSection.generated.h"

UCLASS()
class UMovieSceneAudioSection : public UMovieSceneSection
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundBase* Sound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StartOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AudioStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AudioDilationFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AudioVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel SoundVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMovieSceneFloatChannel PitchMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSuppressSubtitles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideAttenuation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* AttenuationSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnQueueSubtitles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAudioFinished;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAudioPlaybackPercent;


};