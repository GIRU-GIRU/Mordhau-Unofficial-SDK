#include "AudioComponent.h"

void UAudioComponent::Stop() {
}
	void UAudioComponent::SetWaveParameter(const struct FName& InName, class USoundWave* InWave) {
}
	void UAudioComponent::SetVolumeMultiplier(float NewVolumeMultiplier) {
}
	void UAudioComponent::SetUISound(bool bInUISound) {
}
	void UAudioComponent::SetSubmixSend(class USoundSubmix* Submix, float SendLevel) {
}
	void UAudioComponent::SetSound(class USoundBase* NewSound) {
}
	void UAudioComponent::SetPitchMultiplier(float NewPitchMultiplier) {
}
	void UAudioComponent::SetPaused(bool bPause) {
}
	void UAudioComponent::SetLowPassFilterFrequency(float InLowPassFilterFrequency) {
}
	void UAudioComponent::SetLowPassFilterEnabled(bool InLowPassFilterEnabled) {
}
	void UAudioComponent::SetIntParameter(const struct FName& InName, int inInt) {
}
	void UAudioComponent::SetFloatParameter(const struct FName& InName, float InFloat) {
}
	void UAudioComponent::SetBoolParameter(const struct FName& InName, bool InBool) {
}
	void UAudioComponent::Play(float StartTime) {
}
	bool UAudioComponent::IsPlaying() {
}
	void UAudioComponent::FadeOut(float FadeOutDuration, float FadeVolumeLevel) {
}
	void UAudioComponent::FadeIn(float FadeInDuration, float FadeVolumeLevel, float StartTime) {
}
	bool UAudioComponent::BP_GetAttenuationSettingsToApply(struct FSoundAttenuationSettings* OutAttenuationSettings) {
}
	void UAudioComponent::AdjustVolume(float AdjustVolumeDuration, float AdjustVolumeLevel) {
}
	void UAudioComponent::AdjustAttenuation(const struct FSoundAttenuationSettings& InAttenuationSettings) {
}
