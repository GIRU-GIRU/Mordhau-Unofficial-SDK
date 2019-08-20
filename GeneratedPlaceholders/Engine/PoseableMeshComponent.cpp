#include "PoseableMeshComponent.h"

void UPoseableMeshComponent::SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	void UPoseableMeshComponent::SetBoneScaleByName(const struct FName& BoneName, const struct FVector& InScale3D, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	void UPoseableMeshComponent::SetBoneRotationByName(const struct FName& BoneName, const struct FRotator& InRotation, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	void UPoseableMeshComponent::SetBoneLocationByName(const struct FName& BoneName, const struct FVector& InLocation, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	void UPoseableMeshComponent::ResetBoneTransformByName(const struct FName& BoneName) {
}
	struct FTransform UPoseableMeshComponent::GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	struct FVector UPoseableMeshComponent::GetBoneScaleByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	struct FRotator UPoseableMeshComponent::GetBoneRotationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	struct FVector UPoseableMeshComponent::GetBoneLocationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace) {
}
	void UPoseableMeshComponent::CopyPoseFromSkeletalComponent(class USkeletalMeshComponent* InComponentToCopy) {
}
