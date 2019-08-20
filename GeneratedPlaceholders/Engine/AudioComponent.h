#pragma once

#include "CoreMinimal.h"
#include "AudioComponent.generated.h"

UCLASS()
class UAudioComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAudioComponentParam> InstanceParameters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundClass* SoundClassOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoDestroy : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStopWhenOwnerDestroyed : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldRemainActiveIfDropped : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowSpatialization : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideAttenuation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideSubtitlePriority : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsUISound : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableLowPassFilter : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverridePriority : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSuppressSubtitles : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 6;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01 : 3;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoManageAttachment : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AudioComponentUserID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchModulationMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchModulationMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeModulationMin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeModulationMax;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VolumeMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EnvelopeFollowerAttackTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EnvelopeFollowerReleaseTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Priority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SubtitlePriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PitchMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LowPassFilterFrequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* AttenuationSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundAttenuationSettings AttenuationOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundConcurrency* ConcurrencySettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AutoAttachLocationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AutoAttachRotationRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EAttachmentRule AutoAttachScaleRule;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAudioFinished;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAudioPlaybackPercent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAudioSingleEnvelopeValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAudioMultiEnvelopeValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptDelegate OnQueueSubtitles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class USceneComponent> AutoAttachParent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AutoAttachSocketName;

	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
	void Stop();
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetWaveParameter(const struct FName& InName, class USoundWave* InWave);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetVolumeMultiplier(float NewVolumeMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetUISound(bool bInUISound);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetSound(class USoundBase* NewSound);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetPitchMultiplier(float NewPitchMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetPaused(bool bPause);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetLowPassFilterFrequency(float InLowPassFilterFrequency);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetLowPassFilterEnabled(bool InLowPassFilterEnabled);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetIntParameter(const struct FName& InName, int inInt);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetFloatParameter(const struct FName& InName, float InFloat);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void SetBoolParameter(const struct FName& InName, bool InBool);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void Play(float StartTime);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		bool IsPlaying();
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void FadeOut(float FadeOutDuration, float FadeVolumeLevel);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		bool BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel);
	UFUNCTION(BlueprintCallable, Category = "AudioComponent")
		void AdjustAttenuation(const struct FSoundAttenuationSettings& InAttenuationSettings);

};