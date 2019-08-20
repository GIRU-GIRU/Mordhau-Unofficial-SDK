#pragma once

#include "CoreMinimal.h"
#include "AudioSettings.generated.h"

UCLASS()
class UAudioSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultSoundClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultMediaSoundClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultSoundConcurrencyName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultBaseSoundMix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath VoiPSoundClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EVoiceSampleRate VoiPSampleRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00[0x3];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VoipBufferingDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultReverbSendLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaximumConcurrentStreams;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAudioQualitySettings> QualityLevels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowVirtualizedSounds : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableMasterEQ : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowCenterChannel3DPanning : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t MaxWaveInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumStoppingSources;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EPanningMethod PanningMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EMonoChannelUpmixMethod MonoChannelUpmixMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DialogueFilenameFormat;


};