#include "ProceduralMeshComponent.h"

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents) {
}
	void UProceduralMeshComponent::UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents) {
}
	void UProceduralMeshComponent::SetMeshSectionVisible(int SectionIndex, bool bNewVisibility) {
}
	bool UProceduralMeshComponent::IsMeshSectionVisible(int SectionIndex) {
}
	int UProceduralMeshComponent::GetNumSections() {
}
	void UProceduralMeshComponent::CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision) {
}
	void UProceduralMeshComponent::CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision) {
}
	void UProceduralMeshComponent::ClearMeshSection(int SectionIndex) {
}
	void UProceduralMeshComponent::ClearCollisionConvexMeshes() {
}
	void UProceduralMeshComponent::ClearAllMeshSections() {
}
	void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts) {
}
