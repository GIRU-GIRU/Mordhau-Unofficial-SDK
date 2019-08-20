#include "SkinnedMeshComponent.h"

void USkinnedMeshComponent::UnHideBoneByName(const struct FName& BoneName) {
}
	void USkinnedMeshComponent::TransformToBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation) {
}
	void USkinnedMeshComponent::TransformFromBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation) {
}
	void USkinnedMeshComponent::ShowMaterialSection(int MaterialID, bool bShow, int LODIndex) {
}
	void USkinnedMeshComponent::ShowAllMaterialSections(int LODIndex) {
}
	void USkinnedMeshComponent::SetVertexColorOverride_LinearColor(int LODIndex, TArray<struct FLinearColor> VertexColors) {
}
	void USkinnedMeshComponent::SetSkinWeightOverride(int LODIndex, TArray<struct FSkelMeshSkinWeightInfo> SkinWeights) {
}
	void USkinnedMeshComponent::SetSkeletalMesh(class USkeletalMesh* NewMesh, bool bReinitPose) {
}
	void USkinnedMeshComponent::SetRenderStatic(bool bNewValue) {
}
	void USkinnedMeshComponent::SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit) {
}
	void USkinnedMeshComponent::SetMinLOD(int InNewMinLOD) {
}
	void USkinnedMeshComponent::SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate) {
}
	void USkinnedMeshComponent::SetForcedLOD(int InNewForcedLOD) {
}
	void USkinnedMeshComponent::SetCastCapsuleIndirectShadow(bool bNewValue) {
}
	void USkinnedMeshComponent::SetCastCapsuleDirectShadow(bool bNewValue) {
}
	void USkinnedMeshComponent::SetCapsuleIndirectShadowMinVisibility(float NewValue) {
}
	bool USkinnedMeshComponent::IsMaterialSectionShown(int MaterialID, int LODIndex) {
}
	bool USkinnedMeshComponent::IsBoneHiddenByName(const struct FName& BoneName) {
}
	void USkinnedMeshComponent::HideBoneByName(const struct FName& BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption) {
}
	struct FName USkinnedMeshComponent::GetSocketBoneName(const struct FName& InSocketName) {
}
	struct FVector USkinnedMeshComponent::GetRefPosePosition(int BoneIndex) {
}
	struct FName USkinnedMeshComponent::GetParentBone(const struct FName& BoneName) {
}
	int USkinnedMeshComponent::GetNumLODs() {
}
	int USkinnedMeshComponent::GetNumBones() {
}
	struct FName USkinnedMeshComponent::GetBoneName(int BoneIndex) {
}
	int USkinnedMeshComponent::GetBoneIndex(const struct FName& BoneName) {
}
	struct FName USkinnedMeshComponent::FindClosestBone_K2(const struct FVector& TestLocation, float IgnoreScale, bool bRequirePhysicsAsset, struct FVector* BoneLocation) {
}
	void USkinnedMeshComponent::ClearVertexColorOverride(int LODIndex) {
}
	void USkinnedMeshComponent::ClearSkinWeightOverride(int LODIndex) {
}
	bool USkinnedMeshComponent::BoneIsChildOf(const struct FName& BoneName, const struct FName& ParentBoneName) {
}
