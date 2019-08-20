#include "MordhauWeapon.h"

void AMordhauWeapon::UpdateTrail(float Weight) {
}
	bool AMordhauWeapon::RequestBlock(EBlockType BlockType, bool bAllowFTP) {
}
	void AMordhauWeapon::OnWasBlocked(EBlockedReason Reason, EAttackMove Move, unsigned char SurfaceType) {
}
	void AMordhauWeapon::OnHit(class AActor* Actor, EAttackMove Move, const struct FName& bone, const struct FVector& WorldLocation, unsigned char Tier, unsigned char SurfaceType) {
}
	void AMordhauWeapon::OnCosmeticHit(EAttackMove Move, const struct FHitResult& Hit) {
}
	void AMordhauWeapon::OnBlockStarted(EBlockType Type) {
}
	void AMordhauWeapon::OnBlocked(EBlockedReason Reason, EAttackMove Move) {
}
	void AMordhauWeapon::OnAttackStopped() {
}
	void AMordhauWeapon::OnAttackStarted(EAttackMove Move, float Angle) {
}
	void AMordhauWeapon::IncreaseBloodLevel(float Amount) {
}
	struct FAttackInfo AMordhauWeapon::GetBaseAttackInfo(EAttackMove Move) {
}
