#include "InstancedStaticMeshComponent.h"

bool UInstancedStaticMeshComponent::UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport) {
}
	void UInstancedStaticMeshComponent::SetCullDistances(int StartCullDistance, int EndCullDistance) {
}
	bool UInstancedStaticMeshComponent::RemoveInstance(int InstanceIndex) {
}
	bool UInstancedStaticMeshComponent::GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform) {
}
	TArray<int> UInstancedStaticMeshComponent::GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace) {
}
	TArray<int> UInstancedStaticMeshComponent::GetInstancesOverlappingBox(const struct FBox& Box, bool bBoxInWorldSpace) {
}
	int UInstancedStaticMeshComponent::GetInstanceCount() {
}
	void UInstancedStaticMeshComponent::ClearInstances() {
}
	int UInstancedStaticMeshComponent::AddInstanceWorldSpace(const struct FTransform& WorldTransform) {
}
	int UInstancedStaticMeshComponent::AddInstance(const struct FTransform& InstanceTransform) {
}
