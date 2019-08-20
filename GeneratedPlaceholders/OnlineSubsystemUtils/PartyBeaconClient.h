#pragma once

#include "CoreMinimal.h"
#include "PartyBeaconClient.generated.h"

UCLASS()
class APartyBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DestSessionId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPartyReservation PendingReservation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EClientRequestType RequestType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bPendingReservationSent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCancelReservation;

	UFUNCTION(BlueprintCallable, Category = "PartyBeaconClient")
	void ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate);
	UFUNCTION(BlueprintCallable, Category = "PartyBeaconClient")
		void ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation);
	UFUNCTION(BlueprintCallable, Category = "PartyBeaconClient")
		void ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader);
	UFUNCTION(BlueprintCallable, Category = "PartyBeaconClient")
		void ClientSendReservationUpdates(int NumRemainingReservations);
	UFUNCTION(BlueprintCallable, Category = "PartyBeaconClient")
		void ClientSendReservationFull();
	UFUNCTION(BlueprintCallable, Category = "PartyBeaconClient")
		void ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);
	UFUNCTION(BlueprintCallable, Category = "PartyBeaconClient")
		void ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse);

};