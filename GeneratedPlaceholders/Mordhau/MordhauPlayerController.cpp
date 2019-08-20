#include "MordhauPlayerController.h"

void AMordhauPlayerController::VoteMap(const struct FString& MapName) {
}
	void AMordhauPlayerController::VoteLevel(const struct FString& LevelName) {
}
	void AMordhauPlayerController::VoteKick(const struct FString& PlayerNameOrSteamID) {
}
	void AMordhauPlayerController::Unban(const struct FString& SteamID) {
}
	void AMordhauPlayerController::Turn(float Value) {
}
	void AMordhauPlayerController::ToggleStamina() {
}
	void AMordhauPlayerController::ToggleDamage() {
}
	void AMordhauPlayerController::StopServerStatsFile() {
}
	void AMordhauPlayerController::StartServerStatsFile() {
}
	void AMordhauPlayerController::SpectatorCmd(const struct FString& SpecCmd) {
}
	void AMordhauPlayerController::Slomo(float Value) {
}
	void AMordhauPlayerController::ShowTips() {
}
	void AMordhauPlayerController::ShowEquipment() {
}
	void AMordhauPlayerController::ShowAuthTraces(bool bValue) {
}
	bool AMordhauPlayerController::SharesInstanceWith(class AActor* OtherActor) {
}
	void AMordhauPlayerController::SetChoiceMenuConsumesInput(bool Value) {
}
	void AMordhauPlayerController::ServerVoteLevel(const struct FString& LevelName) {
}
	void AMordhauPlayerController::ServerUnbanPlayer(uint64_t SteamID) {
}
	void AMordhauPlayerController::ServerToggleStamina() {
}
	void AMordhauPlayerController::ServerToggleDamage() {
}
	void AMordhauPlayerController::ServerStopServerStatsFile() {
}
	void AMordhauPlayerController::ServerStartServerStatsFile() {
}
	void AMordhauPlayerController::ServerSlomo(float Value) {
}
	void AMordhauPlayerController::ServerSetSpawnToken(int NewToken) {
}
	void AMordhauPlayerController::ServerSetMatchmakingLobbyID(const struct FSteamID& InMatchmakingLobbyID) {
}
	void AMordhauPlayerController::ServerSetInventoryItems(const struct FSerializedItems& SerializedItems) {
}
	void AMordhauPlayerController::ServerSetBadge(unsigned char NewBadge) {
}
	void AMordhauPlayerController::ServerSetAuthTicket(const struct FString& InAuhTicket) {
}
	void AMordhauPlayerController::ServerRequestSetTeam(int NewTeam) {
}
	void AMordhauPlayerController::ServerRequestSetSkillsCustomization(const struct FSkillsCustomization& NewCharacterSkills) {
}
	void AMordhauPlayerController::ServerRequestSetGearCustomization(const struct FCharacterGearCustomization& NewCharacterGear) {
}
	void AMordhauPlayerController::ServerRequestSetFaceCustomization(const struct FFaceCustomization& NewCharacterFace) {
}
	void AMordhauPlayerController::ServerRequestSetDefaultProfile(int NewDefaultProfile) {
}
	void AMordhauPlayerController::ServerRequestSetDefaultCharacterTiers(TArray<struct FCharacterGearCustomization> Tiers) {
}
	void AMordhauPlayerController::ServerRequestSetDefaultCharacterEquipment(TArray<struct FEquipmentCustomization> Equip) {
}
	void AMordhauPlayerController::ServerRequestSetAppearanceCustomization(const struct FAppearanceCustomization& NewCharacterAppearance) {
}
	void AMordhauPlayerController::ServerRequestRewards() {
}
	void AMordhauPlayerController::ServerRequestAuthTraces(bool bEnabled) {
}
	void AMordhauPlayerController::ServerRemoveBots(int Amount, int Team) {
}
	void AMordhauPlayerController::ServerRemoveAdmin(uint64_t SteamID) {
}
	void AMordhauPlayerController::ServerKickPlayer(uint64_t SteamID, const struct FString& KickReason) {
}
	void AMordhauPlayerController::ServerHasPassedCheck(unsigned char Param) {
}
	void AMordhauPlayerController::ServerGetServerStats() {
}
	void AMordhauPlayerController::ServerGetMapVoteMaps() {
}
	void AMordhauPlayerController::ServerGetMapVoteCounts() {
}
	void AMordhauPlayerController::ServerChangeLevel(const struct FString& LevelName) {
}
	void AMordhauPlayerController::ServerBanPlayer(uint64_t SteamID, int BanDuration, const struct FString& BanReason) {
}
	void AMordhauPlayerController::ServerBanList() {
}
	void AMordhauPlayerController::ServerAdminLogin(const struct FString& Password) {
}
	void AMordhauPlayerController::ServerAdminList() {
}
	void AMordhauPlayerController::ServerAddBots(int Amount, int Team) {
}
	void AMordhauPlayerController::ServerAddAdmin(uint64_t SteamID) {
}
	void AMordhauPlayerController::SaveCurrentProfilesAsBotProfiles() {
}
	void AMordhauPlayerController::RemoveBotsTeam(int Amount, int Team) {
}
	void AMordhauPlayerController::RemoveBots(int Amount) {
}
	void AMordhauPlayerController::RemoveAdmin(const struct FString& PlayerNameOrSteamID) {
}
	void AMordhauPlayerController::RegisterAnglingYInput(float Value) {
}
	void AMordhauPlayerController::RegisterAnglingXInput(float Value) {
}
	void AMordhauPlayerController::PrepareAndSendCustomizationIfChanged() {
}
	void AMordhauPlayerController::PlayerList() {
}
	void AMordhauPlayerController::OnSpectatorCmd(const struct FString& Cmd, const struct FString& Param) {
}
	void AMordhauPlayerController::OnSpectatorAction(unsigned char Action) {
}
	void AMordhauPlayerController::OnSettingsChanged() {
}
	void AMordhauPlayerController::OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer) {
}
	void AMordhauPlayerController::OnRequestCancelVoteKick() {
}
	void AMordhauPlayerController::OnNewProfileFromClientPreValidation() {
}
	void AMordhauPlayerController::OnNewProfileFromClientPostValidation() {
}
	void AMordhauPlayerController::OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter) {
}
	void AMordhauPlayerController::OnIsAnythingRestockableChanged() {
}
	void AMordhauPlayerController::OnInventoryRewardsDropped(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks) {
}
	void AMordhauPlayerController::OnInventoryItemsUnlocked(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks) {
}
	void AMordhauPlayerController::OnInventoryItemsSerialized(bool bWasSuccessful, const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems) {
}
	void AMordhauPlayerController::OnHighlightStart(class AActor* Actor) {
}
	void AMordhauPlayerController::OnHighlightEnd(class AActor* Actor) {
}
	void AMordhauPlayerController::OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference) {
}
	void AMordhauPlayerController::OnAfterPossess(class APawn* APawn) {
}
	void AMordhauPlayerController::OnAFKTimeExceededMaximum() {
}
	void AMordhauPlayerController::OnActionFailed(const struct FName& Reason) {
}
	void AMordhauPlayerController::LookUp(float Value) {
}
	void AMordhauPlayerController::Kick(const struct FString& PlayerNameOrSteamID, const struct FString& KickReason) {
}
	bool AMordhauPlayerController::IsInventoryAvailable() {
}
	bool AMordhauPlayerController::IsAuthTicketAvailable() {
}
	bool AMordhauPlayerController::IsAdmin() {
}
	void AMordhauPlayerController::GiveClientScoreBP(EScoreFeedReason Reason, int ScoreAmount) {
}
	struct FSteamID AMordhauPlayerController::GetSteamID() {
}
	class UTexture2D* AMordhauPlayerController::GetSteamAvatar(EAvatarSize Size) {
}
	class AMordhauCharacter* AMordhauPlayerController::GetLastControlledCharacter() {
}
	bool AMordhauPlayerController::GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, unsigned char ArmorTier, TMap<EWearableSlot, struct FWearableCustomization>* OutMap) {
}
	bool AMordhauPlayerController::GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization* OutCustomization) {
}
	struct FVector2D AMordhauPlayerController::GetAnglingVector() {
}
	float AMordhauPlayerController::GetAnglingAngle() {
}
	void AMordhauPlayerController::FlushPendingAnglingInputs() {
}
	void AMordhauPlayerController::EquipmentCommand(int Command) {
}
	void AMordhauPlayerController::DisplayMessage(class APlayerState* SenderPlayerState, const struct FString& S, const struct FName& Type, float MsgLifeTime) {
}
	void AMordhauPlayerController::ClientWasKicked_Implementation(const struct FText& KickReason) {
}
	void AMordhauPlayerController::ClientSetServerStats(const struct FServerStats& InServerStats) {
}
	void AMordhauPlayerController::ClientSetMapVoteMaps(TArray<struct FString> InMapVoteMaps) {
}
	void AMordhauPlayerController::ClientSetMapVoteCounts(TArray<unsigned char> InMapVoteCounts) {
}
	void AMordhauPlayerController::ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation) {
}
	void AMordhauPlayerController::ClientRequestMatchmakingLobbyID() {
}
	void AMordhauPlayerController::ClientRequestInventoryItems() {
}
	void AMordhauPlayerController::ClientRequestAuthTicket() {
}
	void AMordhauPlayerController::ClientReceiveScoreNoState(unsigned char ReasonAndParam, int16_t ScoreAmount) {
}
	void AMordhauPlayerController::ClientReceiveScoreBP(EScoreFeedReason Reason, unsigned char ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer) {
}
	void AMordhauPlayerController::ClientReceiveScore(unsigned char ReasonAndParam, int16_t ScoreAmount, class AMordhauPlayerState* AssociatedPlayer) {
}
	void AMordhauPlayerController::ClientReceiveRewards(TArray<struct FItemStack> Rewards) {
}
	void AMordhauPlayerController::ClientReceiveMessage(const struct FString& Message) {
}
	void AMordhauPlayerController::ClientNotifyInventoryIsAvailable() {
}
	void AMordhauPlayerController::ClientMessageBP(const struct FString& String) {
}
	void AMordhauPlayerController::ClientJoinMatchmakingLobby(const struct FSteamID& InMatchmakingLobbyID) {
}
	void AMordhauPlayerController::ClientDrawTracer(const struct FVector& Start, const struct FVector& End) {
}
	void AMordhauPlayerController::ChooseExit() {
}
	void AMordhauPlayerController::Choose9() {
}
	void AMordhauPlayerController::Choose8() {
}
	void AMordhauPlayerController::Choose7() {
}
	void AMordhauPlayerController::Choose6() {
}
	void AMordhauPlayerController::Choose5() {
}
	void AMordhauPlayerController::Choose4() {
}
	void AMordhauPlayerController::Choose3() {
}
	void AMordhauPlayerController::Choose2() {
}
	void AMordhauPlayerController::Choose1() {
}
	void AMordhauPlayerController::ChoiceMenuOptionSelected(int Choice) {
}
	void AMordhauPlayerController::ChoiceMenu(int Index) {
}
	void AMordhauPlayerController::ChangeMap(const struct FString& MapName) {
}
	void AMordhauPlayerController::ChangeLevel(const struct FString& LevelName) {
}
	void AMordhauPlayerController::CancelVoteKick() {
}
	bool AMordhauPlayerController::CanAskForSpawn() {
}
	void AMordhauPlayerController::BanList() {
}
	void AMordhauPlayerController::Ban(const struct FString& PlayerNameOrSteamID, int BanDuration, const struct FString& BanReason) {
}
	void AMordhauPlayerController::AskForSpawn() {
}
	void AMordhauPlayerController::AdminLogin(const struct FString& Password) {
}
	void AMordhauPlayerController::AdminList() {
}
	void AMordhauPlayerController::AddBotsTeam(int Amount, int Team) {
}
	void AMordhauPlayerController::AddBots(int Amount) {
}
	void AMordhauPlayerController::AddAdmin(const struct FString& PlayerNameOrSteamID) {
}
