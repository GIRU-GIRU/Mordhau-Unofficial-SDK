#include "GameModeBase.h"

void AGameModeBase::StartPlay() {
}
	class APawn* AGameModeBase::SpawnDefaultPawnFor(class AController* NewPlayer, class AActor* StartSpot) {
}
	class APawn* AGameModeBase::SpawnDefaultPawnAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform) {
}
	bool AGameModeBase::ShouldReset(class AActor* ActorToReset) {
}
	void AGameModeBase::ReturnToMainMenuHost() {
}
	void AGameModeBase::RestartPlayerAtTransform(class AController* NewPlayer, const struct FTransform& SpawnTransform) {
}
	void AGameModeBase::RestartPlayerAtPlayerStart(class AController* NewPlayer, class AActor* StartSpot) {
}
	void AGameModeBase::RestartPlayer(class AController* NewPlayer) {
}
	void AGameModeBase::ResetLevel() {
}
	bool AGameModeBase::PlayerCanRestart(class APlayerController* Player) {
}
	bool AGameModeBase::MustSpectate(class APlayerController* NewPlayerController) {
}
	void AGameModeBase::K2_PostLogin(class APlayerController* NewPlayer) {
}
	void AGameModeBase::K2_OnSwapPlayerControllers(class APlayerController* OldPC, class APlayerController* NewPC) {
}
	void AGameModeBase::K2_OnRestartPlayer(class AController* NewPlayer) {
}
	void AGameModeBase::K2_OnLogout(class AController* ExitingController) {
}
	void AGameModeBase::K2_OnChangeName(class AController* Other, const struct FString& NewName, bool bNameChange) {
}
	class AActor* AGameModeBase::K2_FindPlayerStart(class AController* Player, const struct FString& IncomingName) {
}
	void AGameModeBase::InitStartSpot(class AActor* StartSpot, class AController* NewPlayer) {
}
	void AGameModeBase::InitializeHUDForPlayer(class APlayerController* NewPlayer) {
}
	bool AGameModeBase::HasMatchStarted() {
}
	void AGameModeBase::HandleStartingNewPlayer(class APlayerController* NewPlayer) {
}
	int AGameModeBase::GetNumSpectators() {
}
	int AGameModeBase::GetNumPlayers() {
}
	class UClass* AGameModeBase::GetDefaultPawnClassForController(class AController* InController) {
}
	class AActor* AGameModeBase::FindPlayerStart(class AController* Player, const struct FString& IncomingName) {
}
	class AActor* AGameModeBase::ChoosePlayerStart(class AController* Player) {
}
	void AGameModeBase::ChangeName(class AController* Controller, const struct FString& NewName, bool bNameChange) {
}
	bool AGameModeBase::CanSpectate(class APlayerController* Viewer, class APlayerState* ViewTarget) {
}
