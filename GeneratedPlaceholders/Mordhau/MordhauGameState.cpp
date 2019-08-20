#include "MordhauGameState.h"

void AMordhauGameState::UpdateCapturePointData() {
}
	void AMordhauGameState::UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor) {
}
	void AMordhauGameState::StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh) {
}
	bool AMordhauGameState::ShouldTickThisFrame(class AAdvancedCharacter* Character) {
}
	bool AMordhauGameState::ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character) {
}
	bool AMordhauGameState::ShouldPaintGearWithTeamColors() {
}
	bool AMordhauGameState::ShouldBlockPawnInput() {
}
	void AMordhauGameState::ReserveCharacterRagdoll(class AAdvancedCharacter* Character) {
}
	void AMordhauGameState::RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character) {
}
	void AMordhauGameState::RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor) {
}
	void AMordhauGameState::LocalPlayerChangedTeam() {
}
	bool AMordhauGameState::IsFriendly(class AActor* ActorA, class AActor* ActorB) {
}
	struct FString AMordhauGameState::GetTeamName(int Team) {
}
	struct FLinearColor AMordhauGameState::GetTeamColor(int Team) {
}
	TArray<int> AMordhauGameState::GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles) {
}
	class USkeletalMesh* AMordhauGameState::GetEquipmentMeshFromCache(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh) {
}
	int64_t AMordhauGameState::GetEquipmentCacheHash(int ID, unsigned char Skin, unsigned char Part1, unsigned char Part2, unsigned char Part3, bool bUseAuxiliaryMesh) {
}
	int AMordhauGameState::GetCurrentFrame() {
}
	class AAdvancedCharacter* AMordhauGameState::GetCharacterByDistanceRank(int DistanceRank) {
}
	struct FTransform AMordhauGameState::GetBindPoseTransform(class USkeletalMesh* Mesh, const struct FName& SocketName) {
}
	class AMapCameraActor* AMordhauGameState::GetAppropriateMapCameraActor(class APlayerController* Controller) {
}
	bool AMordhauGameState::CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team) {
}
	bool AMordhauGameState::CanImmediatelyChangeProfile(class AController* Controller) {
}
