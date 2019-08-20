#pragma once

#include "CoreMinimal.h"
#include "MordhauGameUserSettings.generated.h"

UCLASS()
class UMordhauGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnSettingsChanged;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> AvailableLanguages;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t MordhauVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Language;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Gore;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ThirdPersonDeathCamera;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CharacterCloth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FriendlyMarkers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int HideDefaultLoadouts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NoTeamColorsOnGear;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Headbob;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxRagdolls;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollStayTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MouseSmoothing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DrawTracers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DrawTracersStayTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowCrosshair;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CrosshairType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowKilledBy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowStatusBar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowTargetInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowSpawnInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowChatBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowEmotesMenu;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowAmmo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowAnnouncements;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowTips;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowHitMarker;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowScoreFeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowKillFeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int QuickSpawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowObservedDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int HideWatermark;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ScreenPercentage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FieldOfView;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Gamma;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AntiAliasing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int IndirectCapsuleShadows;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CharacterFidelity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RagdollFidelity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ScreenSpaceReflections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Bloom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MotionBlur;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int AmbientOcclusion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LensFlares;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MasterVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EffectsVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MusicVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VideoVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EServerRegion MatchmakingRegion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> MatchmakingGameModes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bServerBrowserNotFull;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bServerBrowserHasPlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bServerBrowserNoPassword;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ServerBrowserServerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ServerBrowserGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ServerBrowserMaxPing;

	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
	bool ShouldShowWatermark();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowTips();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowTargetInfo();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowStatusBar();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowSpawnInfo();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowScoreFeed();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowObservedDelay();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowMatchmakingOverride();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowMatchmakingDebug();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowKillFeed();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowKilledBy();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowHUD();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowHitMarker();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowEmotesMenu();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowCrosshair();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowChatBox();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowBlood();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowAnnouncements();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldShowAmmo();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldQuickSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool ShouldDrawTracers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetVideoVolume(float NewVolume);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetTracersStayTime(float NewStayTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetThirdPersonDeathcamera(int NewThirdPersonDeathCamera);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowTips(int NewShowTips);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowTargetInfo(int NewShowTargetInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowStatusBar(int NewShowStatusBar);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowSpawnInfo(int NewShowSpawnInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowScoreFeed(int NewShowScoreFeed);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowObservedDelay(int NewShowObservedDelay);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowMatchmakingOverride(int NewShowMatchmakingOverride);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowMatchmakingDebug(int NewShowMatchmakingDebug);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowKillFeed(int NewShowKillFeed);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowKilledBy(int NewShowKilledBy);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowHitMarker(int NewShowHitMarker);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowEquipment(int NewShowEquipment);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowEmotesMenu(int NewEmotesMenu);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowCrosshair(int NewShowCrosshair);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowChatBox(int NewShowChatBox);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowAnnouncements(int NewShowAnnouncements);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetShowAmmo(int NewShowAmmo);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetServerBrowserServerName(const struct FString& NewServerName);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetServerBrowserNotFull(bool bNewNotFull);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetServerBrowserNoPassword(bool bNewNoPassword);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetServerBrowserMaxPing(int NewMaxPing);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetServerBrowserHasPlayers(bool bNewHasPlayers);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetServerBrowserGameMode(const struct FString& NewGameMode);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetScreenSpaceReflections(int NewScreenSpaceReflections);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetScreenPercentage(float NewScreenPercentage);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetRagdollStayTime(float NewTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetRagdollFidelity(int NewFidelity);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetQuickSpawn(int NewQuickSpawn);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetNoTeamColorsOnGear(int NewNoTeamColorsOnGear);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetMusicVolume(float NewVolume);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetMouseSmoothing(float NewSmoothing);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetMotionBlur(float NewMotionBlur);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetMaxRagdolls(int NewMax);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetMatchmakingRegion(EServerRegion NewRegion);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetMatchmakingGameModes(TArray<struct FString> NewGameModes);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetMasterVolume(float NewVolume);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetLensFlares(int NewLensFlares);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetLanguage(const struct FString& NewLanguage);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetIndirectCapsuleShadows(int NewShadows);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetHideWatermark(int NewHideWatermark);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetHideHUD(int NewHideHUD);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetHideDefaultLoadouts(int NewHideDefaultLoadouts);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetHeadbob(float NewHeadbob);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetGore(int NewGore);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetGamma(float NewGamma);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetFriendlyMarkers(int NewFriendlyMarkers);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetFieldOfView(float NewFOV);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetEffectsVolume(float NewVolume);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetDrawTracers(int NewDrawTracers);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetCrosshairType(int NewCrosshairType);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetCharacterFidelity(int NewFidelity);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetCharacterCloth(int NewCharacterCloth);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetCameraDistance(float NewCameraDistance);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetBloom(float NewBloom);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetAntiAliasing(int NewAntiAliasing);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void SetAmbientOcclusion(int NewAmbientOcclusion);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetVideoVolume();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetTracersStayTimeLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetTracersStayTime();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetThirdPersonDeathCamera();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowTips();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowTargetInfo();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowStatusBar();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowSpawnInfo();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowScoreFeed();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowObservedDelay();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowKillFeed();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowKilledBy();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowHitMarker();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowEmotesMenu();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowCrosshair();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowChatBox();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowAnnouncements();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetShowAmmo();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FString GetServerBrowserServerName();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool GetServerBrowserNotFull();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool GetServerBrowserNoPassword();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetServerBrowserMaxPing();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		bool GetServerBrowserHasPlayers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FString GetServerBrowserGameMode();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetScreenSpaceReflections();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetScreenPercentageLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetScreenPercentage();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetRagdollStayTimeLimit();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetRagdollStayTime();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetRagdollFidelity();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetQuickSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetNoTeamColorsOnGear();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetMusicVolume();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetMouseSmoothingLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetMouseSmoothing();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetMotionBlurLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetMotionBlur();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetMaxRagdollsLimit();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetMaxRagdolls();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		EServerRegion GetMatchmakingRegion();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		TArray<struct FString> GetMatchmakingGameModes();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetMasterVolume();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetLensFlares();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FString GetLanguage();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetIndirectCapsuleShadows();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetHideWatermark();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetHideHUD();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetHideDefaultLoadouts();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetHeadbobLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetHeadbob();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetGore();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetGammaLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetGamma();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetFriendlyMarkers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetFrameRateLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetFieldOfViewLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetFieldOfView();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetEffectsVolume();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetDrawTracers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetCurrentMotionBlur();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetCurrentGamma();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetCurrentBloom();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetCrosshairType();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetCharacterFidelity();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetCharacterCloth();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetCameraDistanceLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetCameraDistance();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		struct FVector2D GetBloomLimits();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		float GetBloom();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		void GetAvailableLanguages(TArray<struct FString>* AvailableLanguages);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetAntiAliasing();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetAmbientOcclusion();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameUserSettings")
		int GetActualCrosshairType();

};