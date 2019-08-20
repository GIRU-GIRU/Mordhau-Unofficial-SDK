#include "MordhauEquipment.h"

void AMordhauEquipment::UpdateMaterial(class USkeletalMeshComponent* SkeletalMeshComp) {
}
	void AMordhauEquipment::UpdateInteractionCollision() {
}
	void AMordhauEquipment::UpdateEquipmentVisualState() {
}
	void AMordhauEquipment::UpdateEquipmentState() {
}
	void AMordhauEquipment::SwitchMode() {
}
	void AMordhauEquipment::StopThrownTrail() {
}
	void AMordhauEquipment::StartThrownTrail() {
}
	bool AMordhauEquipment::ShouldShine() {
}
	void AMordhauEquipment::SetPartsUseAuxiliaryMesh(bool bNewValue) {
}
	void AMordhauEquipment::SetParts(TArray<unsigned char> NewPartsId, bool bRebuild) {
}
	void AMordhauEquipment::SetLoaded(bool bNewLoaded) {
}
	void AMordhauEquipment::SetColors(TArray<unsigned char> NewColors) {
}
	void AMordhauEquipment::SetAmmo(unsigned char NewAmmo) {
}
	bool AMordhauEquipment::RestockOtherEquipmentOnCharacter(class AMordhauCharacter* Character) {
}
	void AMordhauEquipment::ResetMeshRelativeTransform() {
}
	void AMordhauEquipment::RequestAttack(EAttackMove Move, float Angle) {
}
	void AMordhauEquipment::RebuildIfAllReplicated() {
}
	void AMordhauEquipment::RebuildEquipment(bool bDoOnlyQuickJob) {
}
	bool AMordhauEquipment::OnRequestModeSwitch(class AMordhauCharacter* Character) {
}
	bool AMordhauEquipment::OnRequestFire(class AMordhauCharacter* Character) {
}
	void AMordhauEquipment::OnRep_ReplicatedSkin() {
}
	void AMordhauEquipment::OnRep_ReplicatedPattern() {
}
	void AMordhauEquipment::OnRep_ReplicatedPartsId() {
}
	void AMordhauEquipment::OnRep_ReplicatedEmblemColors() {
}
	void AMordhauEquipment::OnRep_ReplicatedEmblem() {
}
	void AMordhauEquipment::OnRep_ReplicatedColors() {
}
	void AMordhauEquipment::OnRep_IsUsingAlternateMode() {
}
	void AMordhauEquipment::OnRep_IsLoaded() {
}
	void AMordhauEquipment::OnRep_Ammo() {
}
	void AMordhauEquipment::OnPickedUp(class AMordhauCharacter* Character) {
}
	void AMordhauEquipment::OnPartsChanged() {
}
	void AMordhauEquipment::OnLoadedChanged() {
}
	void AMordhauEquipment::OnHolsteredOrDropped(class AMordhauCharacter* Character) {
}
	void AMordhauEquipment::OnHolstered(class AMordhauCharacter* Character) {
}
	void AMordhauEquipment::OnEquipped(class AMordhauCharacter* Character) {
}
	void AMordhauEquipment::OnDropped(class AMordhauCharacter* Character) {
}
	void AMordhauEquipment::OnAmmoChanged() {
}
	void AMordhauEquipment::LocalPlayerTick(float DeltaTime) {
}
	void AMordhauEquipment::LocalPlayerLateTick(float DeltaTime) {
}
	void AMordhauEquipment::LateTick(float DeltaSeconds) {
}
	struct FEquipmentCustomization AMordhauEquipment::GetRandomCustomization(bool bOnlyColors) {
}
	class AMordhauCharacter* AMordhauEquipment::GetParentCharacter() {
}
	unsigned char AMordhauEquipment::GetCurrentMaxAmmo() {
}
	unsigned char AMordhauEquipment::GetAmmo() {
}
	class AMordhauProjectile* AMordhauEquipment::FireProjectile_Internal(const struct FVector& InOrigin, const struct FRotator& InOrientation, class AController* Controller, float ExpectedDelay, bool bIsLocal) {
}
	void AMordhauEquipment::FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay) {
}
	struct FEquipmentHolsterInfo AMordhauEquipment::FindCurrentHolsterInfo() {
}
	void AMordhauEquipment::EquipmentCommand(int Command) {
}
	void AMordhauEquipment::DestroyPhysicsProxy() {
}
	struct FBoxSphereBounds AMordhauEquipment::ComputeAccurateBounds() {
}
	bool AMordhauEquipment::CanPerformAttack(class AMordhauCharacter* Character, EAttackMove Move) {
}
	bool AMordhauEquipment::BelongsToCharacter() {
}
	void AMordhauEquipment::AssignCustomizationToProjectile(class AMordhauProjectile* Projectile) {
}
	void AMordhauEquipment::AssignCustomization(const struct FEquipmentCustomization& Customization, unsigned char CustomizationEmblem, unsigned char CustomizationEmblemColor1, unsigned char CustomizationEmblemColor2) {
}
