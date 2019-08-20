#include "PartyBeaconClient.h"

void APartyBeaconClient::ServerUpdateReservationRequest(const struct FString& SessionId, const struct FPartyReservation& ReservationUpdate) {
}
	void APartyBeaconClient::ServerReservationRequest(const struct FString& SessionId, const struct FPartyReservation& Reservation) {
}
	void APartyBeaconClient::ServerCancelReservationRequest(const struct FUniqueNetIdRepl& PartyLeader) {
}
	void APartyBeaconClient::ClientSendReservationUpdates(int NumRemainingReservations) {
}
	void APartyBeaconClient::ClientSendReservationFull() {
}
	void APartyBeaconClient::ClientReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse) {
}
	void APartyBeaconClient::ClientCancelReservationResponse(TEnumAsByte<EPartyReservationResult> ReservationResponse) {
}
