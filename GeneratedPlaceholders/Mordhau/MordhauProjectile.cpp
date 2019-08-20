#include "MordhauProjectile.h"

bool AMordhauProjectile::WillSticky(unsigned char Surface) {
}
	bool AMordhauProjectile::WillPassThrough(unsigned char Surface) {
}
	bool AMordhauProjectile::UsesProjectileBlending() {
}
	void AMordhauProjectile::UpdateProjectileState(float DeltaTime) {
}
	void AMordhauProjectile::TerminateProjectile() {
}
	void AMordhauProjectile::SweepProjectile() {
}
	void AMordhauProjectile::StopTrail() {
}
	void AMordhauProjectile::StartTrail() {
}
	void AMordhauProjectile::SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* System) {
}
	void AMordhauProjectile::SpawnDecal(const struct FVector& Location, const struct FRotator& Rotation, const struct FDecalInfo& DecalInfo) {
}
	void AMordhauProjectile::SetCurrentTrailParticles(class UParticleSystemComponent* ParticleSystemComponent) {
}
	bool AMordhauProjectile::RestockCharacter(class AMordhauCharacter* Character) {
}
	void AMordhauProjectile::ProcessProjectileHit(bool bIsBlocking, const struct FHitResult& Hit) {
}
	void AMordhauProjectile::OnRep_ReplicatedProjectileInfo() {
}
	void AMordhauProjectile::OnProjectileHitCosmetic(class AActor* OtherActor, const struct FHitResult& Hit) {
}
	void AMordhauProjectile::OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped) {
}
	void AMordhauProjectile::OnProjectileFired() {
}
	void AMordhauProjectile::OnProjectileDamagedCharacter(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone) {
}
	void AMordhauProjectile::InitializeProjectile(class AController* InOwningController, bool bInIsLocallyPredicted, class AActor* InCreator) {
}
	class AController* AMordhauProjectile::GetProjectileOwningController() {
}
	class AActor* AMordhauProjectile::GetProjectileCreator() {
}
	float AMordhauProjectile::GetPercentageOfMaxVelocityClamped() {
}
	struct FTransform AMordhauProjectile::GetCurrentTransformWithOffsets() {
}
	class UParticleSystemComponent* AMordhauProjectile::GetCurrentTrailParticles() {
}
	struct FTransform AMordhauProjectile::GetBlendedTransform(float T) {
}
	void AMordhauProjectile::Fire() {
}
	void AMordhauProjectile::CarryOverTrail(class AMordhauProjectile* NewProjectile) {
}
	void AMordhauProjectile::BounceComponent(class USkeletalMeshComponent* ComponentToBounce, const struct FVector& NewVelocity, const struct FVector& NewAngularVelocity) {
}
	bool AMordhauProjectile::AttachProjectile(const struct FHitResult& Hit) {
}
