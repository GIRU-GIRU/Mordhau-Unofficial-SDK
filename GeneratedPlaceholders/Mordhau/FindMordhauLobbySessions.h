#pragma once

#include "CoreMinimal.h"
#include "FindMordhauLobbySessions.generated.h"

UCLASS()
class UFindMordhauLobbySessions : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFindLobbySessionsFilter Filter;

	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
	void OnFindLobbySessionsComplete(bool bWasSuccessful);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
		struct FServerAddress STATIC_GetServerAddress(const struct FLobbySearchResult& Result, bool* bWasSuccessful);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
		struct FSteamID STATIC_GetOwner(const struct FLobbySearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
		int STATIC_GetMMR(const struct FLobbySearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
		int STATIC_GetMaxPlayers(const struct FLobbySearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
		struct FSteamID STATIC_GetLobbyID(const struct FLobbySearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
		int STATIC_GetCurrentPlayers(const struct FLobbySearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauLobbySessions")
		class UFindMordhauLobbySessions* STATIC_FindMordhauLobbySessions(const struct FFindLobbySessionsFilter& Filter);

};