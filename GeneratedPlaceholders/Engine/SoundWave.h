#pragma once

#include "CoreMinimal.h"
#include "SoundWave.generated.h"

UCLASS()
class USoundWave : public USoundBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CompressionQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StreamingPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESoundwaveSampleRateSettings SampleRateQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESoundGroup> SoundGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLooping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01 : 5;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMature : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bManualWordWrap : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSingleLine : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVirtualizeWhenSilent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsAmbisonics : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SpokenText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SubtitlePriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Volume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Pitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RawPCMDataSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SampleRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSubtitleCue> Subtitles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLocalizedSubtitle> LocalizedSubtitles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveTable* Curves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveTable* InternalCurves;


};