#pragma once

#include "CoreMinimal.h"
#include "LobbyBeaconClient.generated.h"

UCLASS()
class ALobbyBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ALobbyBeaconState* LobbyState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ALobbyBeaconPlayerState* PlayerState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ELobbyBeaconJoinState LobbyJoinServerState;

	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
	void ServerSetPartyOwner(const struct FUniqueNetIdRepl& InUniqueId, const struct FUniqueNetIdRepl& InPartyOwnerId);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ServerNotifyJoiningServer();
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ServerLoginPlayer(const struct FString& InSessionId, const struct FUniqueNetIdRepl& InUniqueId, const struct FString& UrlString);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ServerKickPlayer(const struct FUniqueNetIdRepl& PlayerToKick, const struct FText& Reason);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ServerDisconnectFromLobby();
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ServerCheat(const struct FString& Msg);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ClientWasKicked(const struct FText& KickReason);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ClientSetInviteFlags(const struct FJoinabilitySettings& Settings);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ClientPlayerLeft(const struct FUniqueNetIdRepl& InUniqueId);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ClientPlayerJoined(const struct FText& NewPlayerName, const struct FUniqueNetIdRepl& InUniqueId);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ClientLoginComplete(const struct FUniqueNetIdRepl& InUniqueId, bool bWasSuccessful);
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ClientJoinGame();
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconClient")
		void ClientAckJoiningServer();

};