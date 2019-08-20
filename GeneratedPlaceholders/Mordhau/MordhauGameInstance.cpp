#include "MordhauGameInstance.h"

void UMordhauGameInstance::UpdateParty(bool bSendProfile) {
}
	void UMordhauGameInstance::Shutdown() {
}
	void UMordhauGameInstance::ShowPasswordDialog(const struct FServerSearchResult& SearchResult) {
}
	void UMordhauGameInstance::ShowNetworkErrorDialog() {
}
	void UMordhauGameInstance::ShowJoiningDialog(const struct FServerSearchResult& SearchResult) {
}
	void UMordhauGameInstance::ShowInviteDialog() {
}
	void UMordhauGameInstance::SetPartyState(EPartyState PartyState) {
}
	void UMordhauGameInstance::SetPartyMemberProfile(const struct FSteamID& SteamID, const struct FPlayerProfile& Profile) {
}
	void UMordhauGameInstance::SetPartyMatchmakingLobbyID(const struct FSteamID& LobbyId) {
}
	void UMordhauGameInstance::SetPartyLeader(const struct FSteamID& SteamID) {
}
	void UMordhauGameInstance::SetPartyGameServer(const struct FServerSearchResult& SearchResult) {
}
	void UMordhauGameInstance::SetNetworkError(const struct FText& ErrorText) {
}
	void UMordhauGameInstance::SetMatchmakingMemberData() {
}
	void UMordhauGameInstance::SetMatchmakingGameServer(const struct FServerSearchResult& SearchResult) {
}
	void UMordhauGameInstance::SaveConfig() {
}
	void UMordhauGameInstance::LogMatchmakingState(const struct FString& Message) {
}
	void UMordhauGameInstance::LeaveParty() {
}
	bool UMordhauGameInstance::LeaveMatchmakingLobby() {
}
	void UMordhauGameInstance::KickPartyMember(const struct FSteamID& SteamID) {
}
	void UMordhauGameInstance::JoinPartyGameServer() {
}
	bool UMordhauGameInstance::JoinMatchmakingLobbyByID(const struct FSteamID& LobbyId) {
}
	bool UMordhauGameInstance::JoinMatchmakingLobby(const struct FLobbySearchResult& SearchResult) {
}
	bool UMordhauGameInstance::IsPartyReadyForMatchmaking() {
}
	bool UMordhauGameInstance::IsPartyMember(const struct FSteamID& SteamID) {
}
	void UMordhauGameInstance::Init() {
}
	EPartyState UMordhauGameInstance::GetPartyState() {
}
	int UMordhauGameInstance::GetPartySize() {
}
	int UMordhauGameInstance::GetPartyMMR() {
}
	struct FString UMordhauGameInstance::GetPartyMemberStatus(const struct FSteamID& SteamID) {
}
	void UMordhauGameInstance::GetPartyMemberServerAddress(const struct FSteamID& SteamID, struct FServerAddress* ServerAddress, bool* bWasSuccessful) {
}
	TArray<struct FSteamID> UMordhauGameInstance::GetPartyMembers() {
}
	bool UMordhauGameInstance::GetPartyMemberProfile(const struct FSteamID& SteamID, struct FPlayerProfile* Profile) {
}
	struct FSteamID UMordhauGameInstance::GetPartyMatchmakingLobbyID() {
}
	struct FSteamID UMordhauGameInstance::GetPartyLobbyID() {
}
	struct FSteamID UMordhauGameInstance::GetPartyLeader() {
}
	int UMordhauGameInstance::STATIC_GetMinMatchmakingMembers() {
}
	int UMordhauGameInstance::GetMaxMatchmakingMembers() {
}
	void UMordhauGameInstance::GetMatchmakingServerAddress(struct FServerAddress* ServerAddress, bool* bWasSuccessful) {
}
	TArray<struct FSteamID> UMordhauGameInstance::GetMatchmakingMembers() {
}
	struct FSteamID UMordhauGameInstance::GetMatchmakingLobbyOwner() {
}
	struct FSteamID UMordhauGameInstance::GetMatchmakingLobbyID() {
}
	struct FMapInfo UMordhauGameInstance::GetMapInfo(const struct FString& MapName) {
}
	struct FString UMordhauGameInstance::GetAuthTicket() {
}
	bool UMordhauGameInstance::CreateMatchmakingLobby(TArray<struct FString> InGameModes, EServerRegion InRegion) {
}
	bool UMordhauGameInstance::ClientTravelSession(const struct FServerSearchResult& SearchResult, const struct FString& Password) {
}
	bool UMordhauGameInstance::ClientTravel(const struct FString& MapName, int PlayerCount) {
}
	void UMordhauGameInstance::ClearPartyMemberProfile(const struct FSteamID& SteamID) {
}
	void UMordhauGameInstance::ClearPartyMatchmakingLobbyID() {
}
	void UMordhauGameInstance::ClearPartyGameServer() {
}
	void UMordhauGameInstance::ClearMatchmakingGameServer() {
}
	bool UMordhauGameInstance::CanLeaveParty() {
}
	bool UMordhauGameInstance::CanInviteToParty() {
}
	void UMordhauGameInstance::CancelAuthTicket() {
}
	void UMordhauGameInstance::BPStopRecordingReplay() {
}
	void UMordhauGameInstance::BPStopPlayingReplay() {
}
	void UMordhauGameInstance::BPStartRecordingReplay(const struct FString& InName, const struct FString& FriendlyName, TArray<struct FString> AdditionalOptions) {
}
	void UMordhauGameInstance::BPPlayReplay(const struct FString& InName, TArray<struct FString> AdditionalOptions) {
}
