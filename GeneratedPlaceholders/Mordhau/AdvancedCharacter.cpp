#include "AdvancedCharacter.h"

void AAdvancedCharacter::UnHighlight() {
}
	void AAdvancedCharacter::TurnNotAbsolute(float Value) {
}
	void AAdvancedCharacter::TurnAtRate(float Val) {
}
	void AAdvancedCharacter::Turn(float Val, bool bIsAbsolute) {
}
	bool AAdvancedCharacter::Trip() {
}
	void AAdvancedCharacter::Suicide() {
}
	void AAdvancedCharacter::StopRegen(float ExtraTime) {
}
	void AAdvancedCharacter::StopHealthRegen(float ExtraTime) {
}
	void AAdvancedCharacter::StopBurningCosmetic() {
}
	void AAdvancedCharacter::StartRagdollWithBlend(float BlendDuration) {
}
	void AAdvancedCharacter::StartRagdoll() {
}
	void AAdvancedCharacter::StartBurningCosmetic() {
}
	void AAdvancedCharacter::StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController) {
}
	class UParticleSystemComponent* AAdvancedCharacter::SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation> AttachType, const struct FName& Socket, bool bForce) {
}
	void AAdvancedCharacter::SetOnSmoke(class AMasterField* SmokeField) {
}
	void AAdvancedCharacter::SetOnFire(class AMasterField* FireField) {
}
	void AAdvancedCharacter::SetLookLagInductionTarget(float Amount, float ChangeSpeed) {
}
	void AAdvancedCharacter::SetLocationLagInductionTarget(float Amount, float ChangeSpeed) {
}
	void AAdvancedCharacter::SetIsRagdollFalling(bool bInIsRagdollFalling) {
}
	void AAdvancedCharacter::SetAdditiveOverrideType(const struct FName& NewType, float Duration) {
}
	void AAdvancedCharacter::ServerTrip() {
}
	void AAdvancedCharacter::ServerSuicide() {
}
	void AAdvancedCharacter::ServerLookUp(float NewLookUp) {
}
	void AAdvancedCharacter::ResetLookLagInductionTarget() {
}
	void AAdvancedCharacter::ResetLocationLagInductionTarget() {
}
	void AAdvancedCharacter::ResetLagInductionTargets() {
}
	void AAdvancedCharacter::ResetAdditiveOverrideType() {
}
	void AAdvancedCharacter::RequestTrip() {
}
	void AAdvancedCharacter::RequestSuicide() {
}
	void AAdvancedCharacter::RequestMeshEnablePhysics(float Duration) {
}
	void AAdvancedCharacter::ReplicateHealth() {
}
	void AAdvancedCharacter::RegisterMaterialToDissolve(class UMaterialInstanceDynamic* Mat) {
}
	void AAdvancedCharacter::PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const struct FName& bone, bool bFindOptimalSpot) {
}
	class UAudioComponent* AAdvancedCharacter::PlayCharacterSound(class USoundBase* Sound, const struct FName& bone, const struct FVector& InLocation, TEnumAsByte<EAttachLocation> AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier) {
}
	void AAdvancedCharacter::OnTookDamage(bool bWillKill, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent) {
}
	void AAdvancedCharacter::OnRep_Team() {
}
	void AAdvancedCharacter::OnRep_SpawnTurnValue() {
}
	void AAdvancedCharacter::OnRep_ReplicatedLookUpValue() {
}
	void AAdvancedCharacter::OnRep_ReplicatedHealth() {
}
	void AAdvancedCharacter::OnRep_ReplicatedCharacterFlags(unsigned char OldValue) {
}
	void AAdvancedCharacter::OnRep_NetDamage() {
}
	void AAdvancedCharacter::OnKilled(class AController* EventInstigator) {
}
	void AAdvancedCharacter::OnInteractionStart(class AAdvancedCharacter* Character) {
}
	void AAdvancedCharacter::OnInteractionEnd() {
}
	void AAdvancedCharacter::OnHit(class AActor* Actor, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType) {
}
	void AAdvancedCharacter::OnHighlightStart() {
}
	void AAdvancedCharacter::OnHighlightEnd() {
}
	void AAdvancedCharacter::OnHealthChanged() {
}
	void AAdvancedCharacter::OnDied(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent) {
}
	void AAdvancedCharacter::OnCosmeticHit(EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent) {
}
	void AAdvancedCharacter::OnAfterDied(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent) {
}
	void AAdvancedCharacter::OffsetHealth(int Amount, bool bReplicate) {
}
	void AAdvancedCharacter::MoveRight(float Val) {
}
	void AAdvancedCharacter::MoveForward(float Val) {
}
	float AAdvancedCharacter::MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, EMordhauDamageType DamageType, unsigned char DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator) {
}
	void AAdvancedCharacter::LookUpNotAbsolute(float Value) {
}
	void AAdvancedCharacter::LookUpAtRate(float Val) {
}
	void AAdvancedCharacter::LookUp(float Val, bool bIsAbsolute) {
}
	void AAdvancedCharacter::LeftOutOfBoundsArea() {
}
	bool AAdvancedCharacter::Knockback(const struct FVector& Amount) {
}
	bool AAdvancedCharacter::IsOutOfBounds() {
}
	bool AAdvancedCharacter::IsLocallyPlayerControlled() {
}
	bool AAdvancedCharacter::IsLocallyControlledOrUncontrolled() {
}
	bool AAdvancedCharacter::IsAirborne() {
}
	void AAdvancedCharacter::InteractionStart(class AAdvancedCharacter* Character) {
}
	void AAdvancedCharacter::InteractionEnd() {
}
	void AAdvancedCharacter::Highlight() {
}
	float AAdvancedCharacter::GetRawLookUpValue() {
}
	float AAdvancedCharacter::GetOutOfBoundsTimeUntilDeath() {
}
	float AAdvancedCharacter::GetLookUpValue() {
}
	bool AAdvancedCharacter::GetIsDead() {
}
	bool AAdvancedCharacter::GetIsBurning() {
}
	float AAdvancedCharacter::GetDistanceIntoSmokeFieldSmoothed() {
}
	float AAdvancedCharacter::GetDistanceIntoSmokeField() {
}
	bool AAdvancedCharacter::GetBestStickyLocation(const struct FVector& InLocation, struct FVector* OutLocation, struct FVector* OutNormal, struct FName* OutBone) {
}
	unsigned char AAdvancedCharacter::GetArmorTierForBone(const struct FName& BoneName) {
}
	float AAdvancedCharacter::GetAdditiveOverrideTypeNormalizedTime() {
}
	struct FName AAdvancedCharacter::GetAdditiveOverrideType() {
}
	void AAdvancedCharacter::EnteredOutOfBoundsArea() {
}
	void AAdvancedCharacter::DouseFire() {
}
	bool AAdvancedCharacter::CanInteract(class AAdvancedCharacter* Character) {
}
	bool AAdvancedCharacter::CanBleedOutFromHit(const struct FHitResult& HitResult, EMordhauDamageType Type, unsigned char SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator) {
}
	void AAdvancedCharacter::BPLODTick(float DeltaTime) {
}
	void AAdvancedCharacter::BeginFlinchAdditiveOverride(const struct FName& FlinchOverrideName, const struct FName& AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps) {
}
	void AAdvancedCharacter::AssignNetDamage(unsigned char InType, unsigned char InSubType, unsigned char InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent) {
}
	void AAdvancedCharacter::ApplyRagdollForce(float Angle, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent) {
}
	void AAdvancedCharacter::AddWound(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const struct FName& bone, class AActor* Agent, EMordhauDamageType DamageType, unsigned char DamageSubType) {
}
	void AAdvancedCharacter::AddTurnDegrees(float Delta) {
}
