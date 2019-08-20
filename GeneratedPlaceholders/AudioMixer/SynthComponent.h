#pragma once

#include "CoreMinimal.h"
#include "SynthComponent.generated.h"

UCLASS()
class USynthComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundAttenuation* AttenuationSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoundAttenuationSettings AttenuationOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundConcurrency* ConcurrencySettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundClass* SoundClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundEffectSourcePresetChain* SourceEffectChain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundSubmix* SoundSubmix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundSubmixSendInfo> SoundSubmixSends;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundSourceBusSendInfo> BusSends;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsUISound : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsPreviewSound : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EnvelopeFollowerAttackTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EnvelopeFollowerReleaseTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnAudioEnvelopeValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USynthSound* Synth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAudioComponent* AudioComponent;

	UFUNCTION(BlueprintCallable, Category = "SynthComponent")
	void Stop();
	UFUNCTION(BlueprintCallable, Category = "SynthComponent")
		void Start();
	UFUNCTION(BlueprintCallable, Category = "SynthComponent")
		void SetVolumeMultiplier(float VolumeMultiplier);
	UFUNCTION(BlueprintCallable, Category = "SynthComponent")
		void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	UFUNCTION(BlueprintCallable, Category = "SynthComponent")
		bool IsPlaying();

};