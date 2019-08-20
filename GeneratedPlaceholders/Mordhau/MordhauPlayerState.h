#pragma once

#include "CoreMinimal.h"
#include "MordhauPlayerState.generated.h"

UCLASS()
class AMordhauPlayerState : public APlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> MedianPings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> MedianPingsSorted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CurMedianPingIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PingMedian;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LocalStableShortID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t ReplicatedRank;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t ReplicatedKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int16_t ReplicatedAssists;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint16_t ReplicatedDeathsAndFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int8_t ReplicatedTeam;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Badge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsPartyMember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFriend;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAlive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Kills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Deaths;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Assists;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter> LastMordhauCharacter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsAdmin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int KilledLocalPlayerCounter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsMuted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int KilledByLocalPlayerCounter;

	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
	void SetPlayerName(const struct FString& S);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void OnRep_ReplicatedTeam();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void OnRep_ReplicatedKills();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void OnRep_ReplicatedDeathsAndFlags();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void OnRep_ReplicatedAssists();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		struct FSteamID GetSteamID();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		int GetRank();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		class AMordhauCharacter* GetLastPossessedMordhauCharacter();
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void BanPlayer(int BanDuration, const struct FString& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void AddScore(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void AddKills(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void AddDeaths(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauPlayerState")
		void AddAssists(int Amount);

};