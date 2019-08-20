#pragma once

#include "CoreMinimal.h"
#include "GameUserSettings.generated.h"

UCLASS()
class UGameUserSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseVSync;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseDynamicResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ResolutionSizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ResolutionSizeY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t LastUserConfirmedResolutionSizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t LastUserConfirmedResolutionSizeY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int WindowPosX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int WindowPosY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FullscreenMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LastConfirmedFullscreenMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PreferredFullscreenMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t Version;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AudioQualityLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FrameRateLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DesiredScreenWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseDesiredScreenHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DesiredScreenHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LastUserConfirmedDesiredScreenWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LastUserConfirmedDesiredScreenHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRecommendedScreenWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRecommendedScreenHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastCPUBenchmarkResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastGPUBenchmarkResult;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> LastCPUBenchmarkSteps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> LastGPUBenchmarkSteps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastGPUBenchmarkMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseHDRDisplayOutput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int HDRDisplayOutputNits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnGameUserSettingsUINeedsUpdate;

	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
	void ValidateSettings();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool SupportsHDRDisplayOutput();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetVSyncEnabled(bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetVisualEffectQuality(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetViewDistanceQuality(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetToDefaults();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetTextureQuality(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetShadowQuality(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetScreenResolution(const struct FIntPoint& Resolution);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetResolutionScaleValueEx(float NewScaleValue);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetResolutionScaleValue(int NewScaleValue);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetResolutionScaleNormalized(float NewScaleNormalized);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetPostProcessingQuality(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetOverallScalabilityLevel(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetFullscreenMode(TEnumAsByte<EWindowMode> InFullscreenMode);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetFrameRateLimit(float NewLimit);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetFoliageQuality(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetDynamicResolutionEnabled(bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetBenchmarkFallbackValues();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetAudioQualityLevel(int QualityLevel);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SetAntiAliasingQuality(int Value);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void SaveSettings();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void RunHardwareBenchmark(int WorkScale, float CPUMultiplier, float GPUMultiplier);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void RevertVideoMode();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void ResetToCurrentSettings();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void LoadSettings(bool bForceReload);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsVSyncEnabled();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsVSyncDirty();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsScreenResolutionDirty();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsHDREnabled();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsFullscreenModeDirty();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsDynamicResolutionEnabled();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsDynamicResolutionDirty();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		bool IsDirty();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetVisualEffectQuality();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetViewDistanceQuality();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetTextureQuality();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetShadowQuality();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		struct FIntPoint GetScreenResolution();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void GetResolutionScaleInformationEx(float* CurrentScaleNormalized, float* CurrentScaleValue, float* MinScaleValue, float* MaxScaleValue);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void GetResolutionScaleInformation(float* CurrentScaleNormalized, int* CurrentScaleValue, int* MinScaleValue, int* MaxScaleValue);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		float GetRecommendedResolutionScale();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		TEnumAsByte<EWindowMode> GetPreferredFullscreenMode();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetPostProcessingQuality();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetOverallScalabilityLevel();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		struct FIntPoint GetLastConfirmedScreenResolution();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		TEnumAsByte<EWindowMode> GetLastConfirmedFullscreenMode();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		class UGameUserSettings* STATIC_GetGameUserSettings();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		TEnumAsByte<EWindowMode> GetFullscreenMode();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		float GetFrameRateLimit();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetFoliageQuality();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		struct FIntPoint GetDesktopResolution();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		struct FIntPoint STATIC_GetDefaultWindowPosition();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		TEnumAsByte<EWindowMode> STATIC_GetDefaultWindowMode();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		float GetDefaultResolutionScale();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		struct FIntPoint STATIC_GetDefaultResolution();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetCurrentHDRDisplayNits();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetAudioQualityLevel();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		int GetAntiAliasingQuality();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void EnableHDRDisplayOutput(bool bEnable, int DisplayNits);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void ConfirmVideoMode();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void ApplySettings(bool bCheckForCommandLineOverrides);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void ApplyResolutionSettings(bool bCheckForCommandLineOverrides);
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void ApplyNonResolutionSettings();
	UFUNCTION(BlueprintCallable, Category = "GameUserSettings")
		void ApplyHardwareBenchmarkResults();

};