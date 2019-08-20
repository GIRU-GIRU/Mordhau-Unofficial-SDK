#pragma once

#include "CoreMinimal.h"
#include "SoundSubmix.generated.h"

UCLASS()
class USoundSubmix : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USoundSubmix*> ChildSubmixes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundSubmix* ParentSubmix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESubmixChannelFormat ChannelFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USoundEffectSubmixPreset*> SubmixEffectChain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAmbisonicsSubmixSettingsBase* AmbisonicsPluginSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnSubmixRecordedFileDone;

	UFUNCTION(BlueprintCallable, Category = "SoundSubmix")
	void StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundWave* ExistingSoundWaveToOverwrite);
	UFUNCTION(BlueprintCallable, Category = "SoundSubmix")
		void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration);

};