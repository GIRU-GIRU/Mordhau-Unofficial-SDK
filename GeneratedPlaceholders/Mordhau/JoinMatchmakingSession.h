#pragma once

#include "CoreMinimal.h"
#include "JoinMatchmakingSession.generated.h"

UCLASS()
class UJoinMatchmakingSession : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorld* World;

	UFUNCTION(BlueprintCallable, Category = "JoinMatchmakingSession")
	class UJoinMatchmakingSession* STATIC_JoinMatchmakingSessionByID(class UObject* WorldContextObject, const struct FSteamID& LobbyId);
	UFUNCTION(BlueprintCallable, Category = "JoinMatchmakingSession")
		class UJoinMatchmakingSession* STATIC_JoinMatchmakingSession(class UObject* WorldContextObject, const struct FLobbySearchResult& SearchResult);

};