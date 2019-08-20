#pragma once

#include "CoreMinimal.h"
#include "MordhauGameSession.generated.h"

UCLASS()
class AMordhauGameSession : public AGameSession
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSlots;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ServerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ServerPassword;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString AdminPassword;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<uint64_t> Admins;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<uint64_t, int64_t> BannedPlayers;

	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
	bool UnbanPlayer(const struct FSteamID& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		void TriggerRewardDropForPlayer(class APlayerController* Player);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		void TriggerRewardDrop();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		void RemoveAdmin(class APlayerController* AdminPlayer);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		bool KickPlayer(class APlayerController* KickedPlayer, const struct FText& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		bool BanPlayerWithDuration(class APlayerController* BannedPlayer, int BanDuration, const struct FText& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		bool BanPlayer(class APlayerController* BannedPlayer, const struct FText& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		bool AllowsJoin();
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		void AllowJoin(bool bInAllowJoin);
	UFUNCTION(BlueprintCallable, Category = "MordhauGameSession")
		void AddAdmin(class APlayerController* AdminPlayer);

};