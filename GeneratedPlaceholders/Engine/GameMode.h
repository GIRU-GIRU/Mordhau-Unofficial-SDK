#pragma once

#include "CoreMinimal.h"
#include "GameMode.generated.h"

UCLASS()
class AGameMode : public AGameModeBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName MatchState;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDelayedStart : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumSpectators;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumPlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumBots;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinRespawnDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumTravellingPlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* EngineMessageClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class APlayerState*> InactivePlayerArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InactivePlayerStateLifeSpan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxInactivePlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHandleDedicatedServerReplays;

	UFUNCTION(BlueprintCallable, Category = "GameMode")
	void StartMatch();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		void SetBandwidthLimit(float AsyncIOBandwidthLimit);
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		void Say(const struct FString& Msg);
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		void RestartGame();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		bool ReadyToStartMatch();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		bool ReadyToEndMatch();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		void K2_OnSetMatchState(const struct FName& NewState);
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		bool IsMatchInProgress();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		bool HasMatchEnded();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		struct FName GetMatchState();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		void EndMatch();
	UFUNCTION(BlueprintCallable, Category = "GameMode")
		void AbortMatch();

};