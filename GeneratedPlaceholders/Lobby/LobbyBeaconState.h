#pragma once

#include "CoreMinimal.h"
#include "LobbyBeaconState.generated.h"

UCLASS()
class ALobbyBeaconState : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxPlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* LobbyBeaconPlayerStateClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLobbyStarted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WaitForPlayersTimeRemaining;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLobbyPlayerStateInfoArray Players;

	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconState")
	void OnRep_WaitForPlayersTimeRemaining();
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconState")
		void OnRep_LobbyStarted();

};