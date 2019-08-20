#pragma once

#include "CoreMinimal.h"
#include "FindMordhauServerSessions.generated.h"

UCLASS()
class UFindMordhauServerSessions : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EServerList ServerList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxResults;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFindServerSessionsFilter Filter;

	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
	void OnFindServerSessionsComplete(bool bWasSuccessful);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_IsVacSecured(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_IsRanked(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_IsPasswordProtected(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_IsOfficial(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_IsModded(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_IsMatchmaking(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_IsDevBuild(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		struct FString STATIC_GetServerName(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		EServerList STATIC_GetServerList(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		EServerRegion STATIC_GetRegion(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		int STATIC_GetPing(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		int STATIC_GetMaxPlayers(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		struct FString STATIC_GetMapName(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		struct FSteamID STATIC_GetLobbyID(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		struct FString STATIC_GetGameMode(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		int STATIC_GetCurrentPlayers(const struct FServerSearchResult& Result);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		class UFindMordhauServerSessions* STATIC_FindMordhauServerSessions(EServerList ServerList, int MaxResults, const struct FFindServerSessionsFilter& Filter);
	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessions")
		bool STATIC_AllowsJoin(const struct FServerSearchResult& Result);

};