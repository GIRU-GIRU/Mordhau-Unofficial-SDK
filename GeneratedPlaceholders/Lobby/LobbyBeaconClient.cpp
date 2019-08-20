#include "LobbyBeaconClient.h"

void ALobbyBeaconClient::ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId) {
}
	void ALobbyBeaconClient::ServerNotifyJoiningServer() {
}
	void ALobbyBeaconClient::ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString) {
}
	void ALobbyBeaconClient::ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason) {
}
	void ALobbyBeaconClient::ServerDisconnectFromLobby() {
}
	void ALobbyBeaconClient::ServerCheat(const struct FString& Msg) {
}
	void ALobbyBeaconClient::ClientWasKicked(const struct FText& KickReason) {
}
	void ALobbyBeaconClient::ClientSetInviteFlags(const struct FJoinabilitySettings& Settings) {
}
	void ALobbyBeaconClient::ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId) {
}
	void ALobbyBeaconClient::ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId) {
}
	void ALobbyBeaconClient::ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful) {
}
	void ALobbyBeaconClient::ClientJoinGame() {
}
	void ALobbyBeaconClient::ClientAckJoiningServer() {
}
