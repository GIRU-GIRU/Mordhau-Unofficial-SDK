#pragma once

#include "CoreMinimal.h"
#include "LobbyBeaconPlayerState.generated.h"

UCLASS()
class ALobbyBeaconPlayerState : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText DisplayName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FUniqueNetIdRepl UniqueId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FUniqueNetIdRepl PartyOwnerUniqueId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bInLobby;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AOnlineBeaconClient* ClientActor;

	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconPlayerState")
	void OnRep_PartyOwner();
	UFUNCTION(BlueprintCallable, Category = "LobbyBeaconPlayerState")
		void OnRep_InLobby();

};