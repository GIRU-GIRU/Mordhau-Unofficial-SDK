#pragma once

#include "CoreMinimal.h"
#include "MordhauStats.generated.h"

UCLASS()
class UMordhauStats : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt GameVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt Blocks;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt Chambers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt ProjectilesDeflected;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt ProjectilesBlocked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt Battlecries;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt Disarms;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt Kills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt Assists;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt KillsOneMatch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt AssistsOneMatch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt KillsOneLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt DamageTakenOneLife;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt HeadsDecapitated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt ProjectileHeadHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt ProjectileTorsoHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt ProjectileLegHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt MeleeHeadHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt MeleeTorsoHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt MeleeLegHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt KillsOneAttack;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt FireKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt CouchedHeadKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt LadderKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt TrampleKills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt FunRank;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStatInt FunRankSamples;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement TheABCs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement LivedToTell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement Highlander;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement KeepsComingOff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement EagleEye;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement Yoink;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement JusticeFromGrave;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement NotSparta;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FAchievement BurningMan;

	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
	void UpdateUserAvgRate(const struct FStatAvgRate& Stat, const struct FSteamID& SteamID, float CountThisSession, float SessionLength, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void UpdateAvgRate(const struct FStatAvgRate& Stat, float CountThisSession, float SessionLength, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void UnlockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void UnlockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void StoreUserStats(const struct FSteamID& SteamID, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void StoreStats(ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void SetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, int Value, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void SetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, float Value, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void SetIntValue(const struct FStatInt& Stat, int Value, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void SetFloatValue(const struct FStatFloat& Stat, float Value, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void ResetAllStats(bool bAchievementsToo, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void RequestUserStats(const struct FSteamID& SteamID, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void RequestStats(ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void LockUserAchievement(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void LockAchievement(const struct FAchievement& Achievement, ECallResult* CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void IsUserAchievementUnlocked(const struct FAchievement& Achievement, const struct FSteamID& SteamID, ECallResult* CallResult, bool* bIsUnlocked);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void IsAchievementUnlocked(const struct FAchievement& Achievement, ECallResult* CallResult, bool* bIsUnlocked);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void IncrementIntStatValueChecked(class UWorld* World, const struct FStatInt& Stat);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void GetUserIntValue(const struct FStatInt& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, int* Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void GetUserFloatValue(const struct FStatFloat& Stat, const struct FSteamID& SteamID, ECallResult* CallResult, float* Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		int GetUnlockIntValue(const struct FProgressAchievementInt& Achievement);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		float GetUnlockFloatValue(const struct FProgressAchievementFloat& Achievement);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		int GetMaxIntValue(const struct FStatInt& Stat);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		float GetMaxFloatValue(const struct FStatFloat& Stat);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void GetIntValue(const struct FStatInt& Stat, ECallResult* CallResult, int* Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		bool GetIntStatValueByName(const struct FString& StatName, int* OutValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		struct FStatInt GetIntStat(const struct FProgressAchievementInt& Achievement);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		void GetFloatValue(const struct FStatFloat& Stat, ECallResult* CallResult, float* Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauStats")
		struct FStatFloat GetFloatStat(const struct FProgressAchievementFloat& Achievement);

};