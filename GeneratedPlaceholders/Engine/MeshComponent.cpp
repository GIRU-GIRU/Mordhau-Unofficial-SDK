#include "MeshComponent.h"

void UMeshComponent::SetVectorParameterValueOnMaterials(const struct FName& ParameterName, const struct FVector& ParameterValue) {
}
	void UMeshComponent::SetScalarParameterValueOnMaterials(const struct FName& ParameterName, float ParameterValue) {
}
	void UMeshComponent::PrestreamTextures(float Seconds, bool bPrioritizeCharacterTextures, int CinematicTextureGroups) {
}
	bool UMeshComponent::IsMaterialSlotNameValid(const struct FName& MaterialSlotName) {
}
	TArray<struct FName> UMeshComponent::GetMaterialSlotNames() {
}
	TArray<class UMaterialInterface*> UMeshComponent::GetMaterials() {
}
	int UMeshComponent::GetMaterialIndex(const struct FName& MaterialSlotName) {
}
