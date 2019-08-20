#include "ProjectileMovementComponent.h"

void UProjectileMovementComponent::StopSimulating(const struct FHitResult& HitResult) {
}
	void UProjectileMovementComponent::SetVelocityInLocalSpace(const struct FVector& NewVelocity) {
}
	void UProjectileMovementComponent::OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult) {
}
	void UProjectileMovementComponent::OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity) {
}
	struct FVector UProjectileMovementComponent::LimitVelocity(const struct FVector& NewVelocity) {
}
