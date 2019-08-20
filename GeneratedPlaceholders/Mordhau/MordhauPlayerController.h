#pragma once

#include "CoreMinimal.h"
#include "MordhauPlayerController.generated.h"

UCLASS()
class AMordhauPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsInventoryAvailableOnAuthority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAnythingRestockable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SelectedCharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SelectedDefaultProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile CharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bReceivedValidProfileFromClient;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastAskedForSpawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SpawnToken;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile LastSentCharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ACustomizationReplicationActor* CustomizationReplicationActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSendsDefaultCustomization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FEquipmentCustomization> DefaultCharacterEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCharacterGearCustomization> DefaultCharacterTier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile PendingCharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter> LastControlledCharacter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NextRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseInstancing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData12[0x50];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAFKTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOnlyAFKIfAlive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentAFKTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastAFKCheckCameraLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString AuthTicket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FServerStats ServerStats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> MapVoteMaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> MapVoteCounts;

	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
	void VoteMap(const struct FString& MapName);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void VoteLevel(const struct FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void VoteKick(const struct FString& PlayerNameOrSteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Unban(const struct FString& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Turn(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ToggleStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ToggleDamage();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void StopServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void StartServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void SpectatorCmd(const struct FString& SpecCmd);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Slomo(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ShowTips();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ShowEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ShowAuthTraces(bool bValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		bool SharesInstanceWith(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void SetChoiceMenuConsumesInput(bool Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerVoteLevel(const struct FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerUnbanPlayer(uint64_t SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerToggleStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerToggleDamage();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerStopServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerStartServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerSlomo(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerSetSpawnToken(int NewToken);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerSetMatchmakingLobbyID(const struct FSteamID& InMatchmakingLobbyID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerSetInventoryItems(const struct FSerializedItems& SerializedItems);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerSetBadge(unsigned char NewBadge);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerSetAuthTicket(const struct FString& InAuhTicket);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetTeam(int NewTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetSkillsCustomization(const struct FSkillsCustomization& NewCharacterSkills);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetGearCustomization(const struct FCharacterGearCustomization& NewCharacterGear);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetFaceCustomization(const struct FFaceCustomization& NewCharacterFace);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetDefaultProfile(int NewDefaultProfile);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetDefaultCharacterTiers(TArray<struct FCharacterGearCustomization> Tiers);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetDefaultCharacterEquipment(TArray<struct FEquipmentCustomization> Equip);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestSetAppearanceCustomization(const struct FAppearanceCustomization& NewCharacterAppearance);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestRewards();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRequestAuthTraces(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRemoveBots(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerRemoveAdmin(uint64_t SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerKickPlayer(uint64_t SteamID, const struct FString& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerHasPassedCheck(unsigned char Param);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerGetServerStats();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerGetMapVoteMaps();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerGetMapVoteCounts();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerChangeLevel(const struct FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerBanPlayer(uint64_t SteamID, int BanDuration, const struct FString& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerBanList();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerAdminLogin(const struct FString& Password);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerAdminList();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerAddBots(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ServerAddAdmin(uint64_t SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void SaveCurrentProfilesAsBotProfiles();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void RemoveBotsTeam(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void RemoveBots(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void RemoveAdmin(const struct FString& PlayerNameOrSteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void RegisterAnglingYInput(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void RegisterAnglingXInput(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void PrepareAndSendCustomizationIfChanged();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void PlayerList();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnSpectatorCmd(const struct FString& Cmd, const struct FString& Param);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnSpectatorAction(unsigned char Action);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnSettingsChanged();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnRequestCancelVoteKick();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnNewProfileFromClientPreValidation();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnNewProfileFromClientPostValidation();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnIsAnythingRestockableChanged();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnInventoryRewardsDropped(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnInventoryItemsUnlocked(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnInventoryItemsSerialized(bool bWasSuccessful, const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnHighlightStart(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnHighlightEnd(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnAfterPossess(class APawn* APawn);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnAFKTimeExceededMaximum();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void OnActionFailed(const struct FName& Reason);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void LookUp(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Kick(const struct FString& PlayerNameOrSteamID, const struct FString& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		bool IsInventoryAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		bool IsAuthTicketAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		bool IsAdmin();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void GiveClientScoreBP(EScoreFeedReason Reason, int ScoreAmount);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		struct FSteamID GetSteamID();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		class UTexture2D* GetSteamAvatar(EAvatarSize Size);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		class AMordhauCharacter* GetLastControlledCharacter();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		bool GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, unsigned char ArmorTier, TMap<EWearableSlot, struct FWearableCustomization>* OutMap);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		bool GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization* OutCustomization);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		struct FVector2D GetAnglingVector();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		float GetAnglingAngle();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void FlushPendingAnglingInputs();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void EquipmentCommand(int Command);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void DisplayMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientWasKicked_Implementation(const struct FText& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientSetServerStats(const struct FServerStats& InServerStats);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientSetMapVoteMaps(TArray<struct FString> InMapVoteMaps);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientSetMapVoteCounts(TArray<unsigned char> InMapVoteCounts);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientRequestMatchmakingLobbyID();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientRequestInventoryItems();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientRequestAuthTicket();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientReceiveScoreNoState(unsigned char ReasonAndParam, int16_t ScoreAmount);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientReceiveScoreBP(EScoreFeedReason Reason, unsigned char ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientReceiveScore(unsigned char ReasonAndParam, int16_t ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientReceiveRewards(TArray<struct FItemStack> Rewards);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientReceiveMessage(const struct FString& Message);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientNotifyInventoryIsAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientMessageBP(const struct FString& String);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientJoinMatchmakingLobby(const struct FSteamID& InMatchmakingLobbyID);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ClientDrawTracer(const struct FVector& Start, const struct FVector& End);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ChooseExit();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose9();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose8();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose7();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose6();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose5();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose4();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose3();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose2();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Choose1();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ChoiceMenuOptionSelected(int Choice);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ChoiceMenu(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ChangeMap(const struct FString& MapName);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void ChangeLevel(const struct FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void CancelVoteKick();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		bool CanAskForSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void BanList();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void Ban(const struct FString& PlayerNameOrSteamID, int BanDuration, const struct FString& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void AskForSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void AdminLogin(const struct FString& Password);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void AdminList();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void AddBotsTeam(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void AddBots(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerController")
		void AddAdmin(const struct FString& PlayerNameOrSteamID);

};