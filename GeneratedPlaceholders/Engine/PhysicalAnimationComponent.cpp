#include "PhysicalAnimationComponent.h"

void UPhysicalAnimationComponent::SetStrengthMultiplyer(float InStrengthMultiplyer) {
}
	void UPhysicalAnimationComponent::SetSkeletalMeshComponent(class USkeletalMeshComponent* InSkeletalMeshComponent) {
}
	struct FTransform UPhysicalAnimationComponent::GetBodyTargetTransform(const struct FName& BodyName) {
}
	void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettingsBelow(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData, bool bIncludeSelf) {
}
	void UPhysicalAnimationComponent::ApplyPhysicalAnimationSettings(const struct FName& BodyName, const struct FPhysicalAnimationData& PhysicalAnimationData) {
}
	void UPhysicalAnimationComponent::ApplyPhysicalAnimationProfileBelow(const struct FName& BodyName, const struct FName& ProfileName, bool bIncludeSelf, bool bClearNotFound) {
}
