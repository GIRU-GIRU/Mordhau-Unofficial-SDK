#include "GameUserSettings.h"

void UGameUserSettings::ValidateSettings() {
}
	bool UGameUserSettings::SupportsHDRDisplayOutput() {
}
	void UGameUserSettings::SetVSyncEnabled(bool bEnable) {
}
	void UGameUserSettings::SetVisualEffectQuality(int Value) {
}
	void UGameUserSettings::SetViewDistanceQuality(int Value) {
}
	void UGameUserSettings::SetToDefaults() {
}
	void UGameUserSettings::SetTextureQuality(int Value) {
}
	void UGameUserSettings::SetShadowQuality(int Value) {
}
	void UGameUserSettings::SetScreenResolution(const struct FIntPoint& Resolution) {
}
	void UGameUserSettings::SetResolutionScaleValueEx(float NewScaleValue) {
}
	void UGameUserSettings::SetResolutionScaleValue(int NewScaleValue) {
}
	void UGameUserSettings::SetResolutionScaleNormalized(float NewScaleNormalized) {
}
	void UGameUserSettings::SetPostProcessingQuality(int Value) {
}
	void UGameUserSettings::SetOverallScalabilityLevel(int Value) {
}
	void UGameUserSettings::SetFullscreenMode(TEnumAsByte<EWindowMode> InFullscreenMode) {
}
	void UGameUserSettings::SetFrameRateLimit(float NewLimit) {
}
	void UGameUserSettings::SetFoliageQuality(int Value) {
}
	void UGameUserSettings::SetDynamicResolutionEnabled(bool bEnable) {
}
	void UGameUserSettings::SetBenchmarkFallbackValues() {
}
	void UGameUserSettings::SetAudioQualityLevel(int QualityLevel) {
}
	void UGameUserSettings::SetAntiAliasingQuality(int Value) {
}
	void UGameUserSettings::SaveSettings() {
}
	void UGameUserSettings::RunHardwareBenchmark(int WorkScale, float CPUMultiplier, float GPUMultiplier) {
}
	void UGameUserSettings::RevertVideoMode() {
}
	void UGameUserSettings::ResetToCurrentSettings() {
}
	void UGameUserSettings::LoadSettings(bool bForceReload) {
}
	bool UGameUserSettings::IsVSyncEnabled() {
}
	bool UGameUserSettings::IsVSyncDirty() {
}
	bool UGameUserSettings::IsScreenResolutionDirty() {
}
	bool UGameUserSettings::IsHDREnabled() {
}
	bool UGameUserSettings::IsFullscreenModeDirty() {
}
	bool UGameUserSettings::IsDynamicResolutionEnabled() {
}
	bool UGameUserSettings::IsDynamicResolutionDirty() {
}
	bool UGameUserSettings::IsDirty() {
}
	int UGameUserSettings::GetVisualEffectQuality() {
}
	int UGameUserSettings::GetViewDistanceQuality() {
}
	int UGameUserSettings::GetTextureQuality() {
}
	int UGameUserSettings::GetShadowQuality() {
}
	struct FIntPoint UGameUserSettings::GetScreenResolution() {
}
	void UGameUserSettings::GetResolutionScaleInformationEx(float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue) {
}
	void UGameUserSettings::GetResolutionScaleInformation(float* CurrentScaleNormalized, int* CurrentScaleValue, int* MinScaleValue, int* MaxScaleValue) {
}
	float UGameUserSettings::GetRecommendedResolutionScale() {
}
	TEnumAsByte<EWindowMode> UGameUserSettings::GetPreferredFullscreenMode() {
}
	int UGameUserSettings::GetPostProcessingQuality() {
}
	int UGameUserSettings::GetOverallScalabilityLevel() {
}
	struct FIntPoint UGameUserSettings::GetLastConfirmedScreenResolution() {
}
	TEnumAsByte<EWindowMode> UGameUserSettings::GetLastConfirmedFullscreenMode() {
}
	class UGameUserSettings* UGameUserSettings::STATIC_GetGameUserSettings() {
}
	TEnumAsByte<EWindowMode> UGameUserSettings::GetFullscreenMode() {
}
	float UGameUserSettings::GetFrameRateLimit() {
}
	int UGameUserSettings::GetFoliageQuality() {
}
	struct FIntPoint UGameUserSettings::GetDesktopResolution() {
}
	struct FIntPoint UGameUserSettings::STATIC_GetDefaultWindowPosition() {
}
	TEnumAsByte<EWindowMode> UGameUserSettings::STATIC_GetDefaultWindowMode() {
}
	float UGameUserSettings::GetDefaultResolutionScale() {
}
	struct FIntPoint UGameUserSettings::STATIC_GetDefaultResolution() {
}
	int UGameUserSettings::GetCurrentHDRDisplayNits() {
}
	int UGameUserSettings::GetAudioQualityLevel() {
}
	int UGameUserSettings::GetAntiAliasingQuality() {
}
	void UGameUserSettings::EnableHDRDisplayOutput(bool bEnable, int DisplayNits) {
}
	void UGameUserSettings::ConfirmVideoMode() {
}
	void UGameUserSettings::ApplySettings(bool bCheckForCommandLineOverrides) {
}
	void UGameUserSettings::ApplyResolutionSettings(bool bCheckForCommandLineOverrides) {
}
	void UGameUserSettings::ApplyNonResolutionSettings() {
}
	void UGameUserSettings::ApplyHardwareBenchmarkResults() {
}
