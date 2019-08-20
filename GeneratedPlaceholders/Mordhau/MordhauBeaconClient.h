#pragma once

#include "CoreMinimal.h"
#include "MordhauBeaconClient.generated.h"

UCLASS()
class AMordhauBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSteamID> SteamIDs;

	UFUNCTION(BlueprintCallable, Category = "MordhauBeaconClient")
	void ServerReserveSlots(TArray<struct FSteamID> InSteamIDs);
	UFUNCTION(BlueprintCallable, Category = "MordhauBeaconClient")
		bool ReserveSlots(TArray<struct FSteamID> InSteamIDs, struct FURL* ConnectURL);
	UFUNCTION(BlueprintCallable, Category = "MordhauBeaconClient")
		void ClientNotifyReservationStatus(int OpenSlots, EReservationStatus ReservationStatus);
	UFUNCTION(BlueprintCallable, Category = "MordhauBeaconClient")
		void ClientNotifyOpenSlots(int OpenSlots);

};