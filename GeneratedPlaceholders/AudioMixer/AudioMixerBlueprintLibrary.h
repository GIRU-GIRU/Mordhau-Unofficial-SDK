#pragma once

#include "CoreMinimal.h"
#include "AudioMixerBlueprintLibrary.generated.h"

UCLASS()
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
	class USoundWave* STATIC_StopRecordingOutput(class UObject* WorldContextObject, EAudioRecordingExportType ExportType, const struct FString& Name, const struct FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		void STATIC_StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		void STATIC_SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex, bool bBypassed);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		void STATIC_RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int EntryIndex);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		void STATIC_RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		int STATIC_GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		void STATIC_ClearMasterSubmixEffects(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		void STATIC_AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	UFUNCTION(BlueprintCallable, Category = "AudioMixerBlueprintLibrary")
		void STATIC_AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);

};