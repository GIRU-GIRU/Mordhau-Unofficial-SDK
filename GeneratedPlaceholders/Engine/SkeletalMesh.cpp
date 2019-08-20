#include "SkeletalMesh.h"

void USkeletalMesh::SetLODSettings(class USkeletalMeshLODSettings* InLODSettings) {
}
	int USkeletalMesh::NumSockets() {
}
	bool USkeletalMesh::IsSectionUsingCloth(int InSectionIndex, bool bCheckCorrespondingSections) {
}
	class USkeletalMeshSocket* USkeletalMesh::GetSocketByIndex(int Index) {
}
	class UNodeMappingContainer* USkeletalMesh::GetNodeMappingContainer(class UBlueprint* SourceAsset) {
}
	struct FBoxSphereBounds USkeletalMesh::GetImportedBounds() {
}
	struct FBoxSphereBounds USkeletalMesh::GetBounds() {
}
	class USkeletalMeshSocket* USkeletalMesh::FindSocketAndIndex(const struct FName& InSocketName, int* OutIndex) {
}
	class USkeletalMeshSocket* USkeletalMesh::FindSocket(const struct FName& InSocketName) {
}
