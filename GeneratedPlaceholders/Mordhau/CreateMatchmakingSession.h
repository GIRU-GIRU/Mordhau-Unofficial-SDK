#pragma once

#include "CoreMinimal.h"
#include "CreateMatchmakingSession.generated.h"

UCLASS()
class UCreateMatchmakingSession : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorld* World;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> GameModes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EServerRegion Region;

	UFUNCTION(BlueprintCallable, Category = "CreateMatchmakingSession")
	class UCreateMatchmakingSession* STATIC_CreateMatchmakingSession(class UObject* WorldContextObject, TArray<struct FString> InGameModes, EServerRegion InRegion);

};