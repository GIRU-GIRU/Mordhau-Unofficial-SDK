#include "MordhauGameMode.h"

bool AMordhauGameMode::VoteLevel(class APlayerController* Player, const struct FString& LevelName) {
}
	void AMordhauGameMode::SetTeamScore(int Team, float Amount) {
}
	void AMordhauGameMode::RequestedAssignTeam(class AController* Controller, int Team) {
}
	void AMordhauGameMode::RemoveBots(int Amount, int Team) {
}
	void AMordhauGameMode::OnTeamScoreChanged(int Team, float OldValue) {
}
	void AMordhauGameMode::OnScoreChanged(class APlayerState* State, float OldValue) {
}
	void AMordhauGameMode::OnMatchStateChanged(const struct FName& OldState, const struct FName& NewState) {
}
	void AMordhauGameMode::OnKillsChanged(class APlayerState* State, int OldValue) {
}
	void AMordhauGameMode::OnKilled(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, EMordhauDamageType Type, unsigned char SubType, class AActor* DamageSource, class AActor* DamageAgent) {
}
	void AMordhauGameMode::OnDeathsChanged(class APlayerState* State, int OldValue) {
}
	void AMordhauGameMode::OnAssistsChanged(class APlayerState* State, int OldValue) {
}
	void AMordhauGameMode::MatchTimeRanOut() {
}
	bool AMordhauGameMode::IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player) {
}
	float AMordhauGameMode::GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player) {
}
	TArray<struct FString> AMordhauGameMode::GetNextMaps(int Count) {
}
	struct FString AMordhauGameMode::GetNextMap() {
}
	TArray<struct FString> AMordhauGameMode::GetMapVoteMaps() {
}
	TArray<unsigned char> AMordhauGameMode::GetMapVoteCounts() {
}
	float AMordhauGameMode::GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget) {
}
	bool AMordhauGameMode::ControllerCanRestart(class AController* Controller) {
}
	bool AMordhauGameMode::ChangeLevel(const struct FString& LevelName) {
}
	bool AMordhauGameMode::CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget) {
}
	bool AMordhauGameMode::CanClash(class APawn* Source, class APawn* Target) {
}
	bool AMordhauGameMode::CanChamber(class APawn* Source, class APawn* Target) {
}
	void AMordhauGameMode::Broadcast(class AActor* Sender, const struct FString& Msg, const struct FName& Type) {
}
	void AMordhauGameMode::AddTeamScore(int Team, float Amount) {
}
	void AMordhauGameMode::AddBots(int Amount, int Team) {
}
