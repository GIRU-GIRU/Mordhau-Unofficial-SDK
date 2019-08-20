#pragma once

#include "CoreMinimal.h"
#include "MordhauGameInstance.generated.h"

UCLASS()
class UMordhauGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString RecipesString;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FServerSearchResult ServerSession;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ServerPassword;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bServerFull;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ChangeLevelCounter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText NetworkErrorText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString AuthTicket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> GameModes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> Maps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FText> Tips;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPartyUpdated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EServerRegion CurrentMatchmakingRegion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> CurrentMatchmakingGameModes;

	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
	void UpdateParty(bool bSendProfile);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void Shutdown();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ShowPasswordDialog(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ShowNetworkErrorDialog();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ShowJoiningDialog(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ShowInviteDialog();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetPartyState(EPartyState PartyState);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetPartyMemberProfile(const struct FSteamID& SteamID, const struct FPlayerProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetPartyMatchmakingLobbyID(const struct FSteamID& LobbyId);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetPartyLeader(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetPartyGameServer(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetNetworkError(const struct FText& ErrorText);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetMatchmakingMemberData();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SetMatchmakingGameServer(const struct FServerSearchResult& SearchResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void SaveConfig();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void LogMatchmakingState(const struct FString& Message);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void LeaveParty();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool LeaveMatchmakingLobby();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void KickPartyMember(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void JoinPartyGameServer();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool JoinMatchmakingLobbyByID(const struct FSteamID& LobbyId);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool JoinMatchmakingLobby(const struct FLobbySearchResult& SearchResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool IsPartyReadyForMatchmaking();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool IsPartyMember(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void Init();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		EPartyState GetPartyState();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		int GetPartySize();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		int GetPartyMMR();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FString GetPartyMemberStatus(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void GetPartyMemberServerAddress(const struct FSteamID& SteamID, struct FServerAddress* ServerAddress, bool* bWasSuccessful);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		TArray<struct FSteamID> GetPartyMembers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool GetPartyMemberProfile(const struct FSteamID& SteamID, struct FPlayerProfile* Profile);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FSteamID GetPartyMatchmakingLobbyID();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FSteamID GetPartyLobbyID();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FSteamID GetPartyLeader();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		int STATIC_GetMinMatchmakingMembers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		int GetMaxMatchmakingMembers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void GetMatchmakingServerAddress(struct FServerAddress* ServerAddress, bool* bWasSuccessful);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		TArray<struct FSteamID> GetMatchmakingMembers();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FSteamID GetMatchmakingLobbyOwner();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FSteamID GetMatchmakingLobbyID();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FMapInfo GetMapInfo(const struct FString& MapName);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		struct FString GetAuthTicket();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool CreateMatchmakingLobby(TArray<struct FString> InGameModes, EServerRegion InRegion);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool ClientTravelSession(const struct FServerSearchResult& SearchResult, const struct FString& Password);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool ClientTravel(const struct FString& MapName, int PlayerCount);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ClearPartyMemberProfile(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ClearPartyMatchmakingLobbyID();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ClearPartyGameServer();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void ClearMatchmakingGameServer();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool CanLeaveParty();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		bool CanInviteToParty();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void CancelAuthTicket();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void BPStopRecordingReplay();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void BPStopPlayingReplay();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void BPStartRecordingReplay(const struct FString& InName, const struct FString& FriendlyName, TArray<struct FString> AdditionalOptions);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameInstance")
		void BPPlayReplay(const struct FString& InName, TArray<struct FString> AdditionalOptions);

};