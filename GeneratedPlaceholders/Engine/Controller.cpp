#include "Controller.h"

void AController::UnPossess() {
}
	void AController::StopMovement() {
}
	void AController::SetInitialLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation) {
}
	void AController::SetIgnoreMoveInput(bool bNewMoveInput) {
}
	void AController::SetIgnoreLookInput(bool bNewLookInput) {
}
	void AController::SetControlRotation(const struct FRotator& NewRotation) {
}
	void AController::ResetIgnoreMoveInput() {
}
	void AController::ResetIgnoreLookInput() {
}
	void AController::ResetIgnoreInputFlags() {
}
	void AController::ReceiveInstigatedAnyDamage(float Damage, class UDamageType* DamageType, class AActor* DamagedActor, class AActor* DamageCauser) {
}
	void AController::Possess(class APawn* InPawn) {
}
	void AController::OnRep_PlayerState() {
}
	void AController::OnRep_Pawn() {
}
	bool AController::LineOfSightTo(class AActor* Other, const struct FVector& ViewPoint, bool bAlternateChecks) {
}
	class APawn* AController::K2_GetPawn() {
}
	bool AController::IsPlayerController() {
}
	bool AController::IsMoveInputIgnored() {
}
	bool AController::IsLookInputIgnored() {
}
	bool AController::IsLocalPlayerController() {
}
	bool AController::IsLocalController() {
}
	class AActor* AController::GetViewTarget() {
}
	struct FRotator AController::GetDesiredRotation() {
}
	struct FRotator AController::GetControlRotation() {
}
	void AController::ClientSetRotation(const struct FRotator& NewRotation, bool bResetCamera) {
}
	void AController::ClientSetLocation(const struct FVector& NewLocation, const struct FRotator& NewRotation) {
}
	class APlayerController* AController::CastToPlayerController() {
}
