#include "Pawn.h"

void APawn::SpawnDefaultController() {
}
	void APawn::SetCanAffectNavigationGeneration(bool bNewValue, bool bForceUpdate) {
}
	void APawn::ReceiveUnpossessed(class AController* OldController) {
}
	void APawn::ReceivePossessed(class AController* NewController) {
}
	void APawn::PawnMakeNoise(float Loudness, const struct FVector& NoiseLocation, bool bUseNoiseMakerLocation, class AActor* NoiseMaker) {
}
	void APawn::OnRep_PlayerState() {
}
	void APawn::OnRep_Controller() {
}
	void APawn::LaunchPawn(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride) {
}
	struct FVector APawn::K2_GetMovementInputVector() {
}
	bool APawn::IsPlayerControlled() {
}
	bool APawn::IsMoveInputIgnored() {
}
	bool APawn::IsLocallyControlled() {
}
	bool APawn::IsControlled() {
}
	struct FVector APawn::GetPendingMovementInputVector() {
}
	struct FVector APawn::GetNavAgentLocation() {
}
	class UPawnMovementComponent* APawn::GetMovementComponent() {
}
	class AActor* APawn::STATIC_GetMovementBaseActor(class APawn* Pawn) {
}
	struct FVector APawn::GetLastMovementInputVector() {
}
	struct FRotator APawn::GetControlRotation() {
}
	class AController* APawn::GetController() {
}
	struct FRotator APawn::GetBaseAimRotation() {
}
	void APawn::DetachFromControllerPendingDestroy() {
}
	struct FVector APawn::ConsumeMovementInputVector() {
}
	void APawn::AddMovementInput(const struct FVector& WorldDirection, float ScaleValue, bool bForce) {
}
	void APawn::AddControllerYawInput(float Val) {
}
	void APawn::AddControllerRollInput(float Val) {
}
	void APawn::AddControllerPitchInput(float Val) {
}
