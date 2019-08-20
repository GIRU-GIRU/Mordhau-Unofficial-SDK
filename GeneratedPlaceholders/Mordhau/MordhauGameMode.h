#pragma once

#include "CoreMinimal.h"
#include "MordhauGameMode.generated.h"

UCLASS()
class AMordhauGameMode : public AGameMode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameModeName> MapPrefixes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> MapRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class AController>> SpawnQueue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AController> CurrentlySpawningController;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* CurrentlySpawningPlayerStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CurrentlySpawningStage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMatchTimeRanOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlayerRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUsesSlowPlayerSpawning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPlayersSpawnInWaves;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPlayersDropAllGearOnDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEquipmentDoesNotDespawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BallistaRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CatapultRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HorseRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> MapVoteMaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EOfficialServerVisibility OfficialServerVisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bServerIsTravelling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DamageFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TeamDamageFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpawnProtectionDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableStamina;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsScoringDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AssistScoreFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AssistDamageToCountAsKill;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KillScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float KillTeamScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TeamKillScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TeamKillTeamScoreChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTeamKillsDecrementKillerKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bTeamKillsIncrementKilledDeaths;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSuicideDecrementsKills;

	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
	bool VoteLevel(class APlayerController* Player, const struct FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void SetTeamScore(int Team, float Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void RequestedAssignTeam(class AController* Controller, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void RemoveBots(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void OnTeamScoreChanged(int Team, float OldValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void OnScoreChanged(class APlayerState* State, float OldValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void OnMatchStateChanged(const struct FName& OldState, const struct FName& NewState);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void OnKillsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void OnDeathsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void OnAssistsChanged(class APlayerState* State, int OldValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void MatchTimeRanOut();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		bool IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		float GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		TArray<struct FString> GetNextMaps(int Count);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		struct FString GetNextMap();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		TArray<struct FString> GetMapVoteMaps();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		TArray<unsigned char> GetMapVoteCounts();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		float GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		bool ControllerCanRestart(class AController* Controller);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		bool ChangeLevel(const struct FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		bool CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		bool CanClash(class APawn* Source, class APawn* Target);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		bool CanChamber(class APawn* Source, class APawn* Target);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& Type);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void AddTeamScore(int Team, float Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameMode")
		void AddBots(int Amount, int Team);

};