#pragma once

#include "CoreMinimal.h"
#include "ProceduralMeshComponent.generated.h"

UCLASS()
class UProceduralMeshComponent : public UMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseComplexAsSimpleCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseAsyncCooking;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* ProcMeshBodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FProcMeshSection> ProcMeshSections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FKConvexElem> CollisionConvexElems;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBoxSphereBounds LocalBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBodySetup*> AsyncBodySetupQueue;

	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
	void UpdateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void UpdateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents);
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void SetMeshSectionVisible(int SectionIndex, bool bNewVisibility);
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		bool IsMeshSectionVisible(int SectionIndex);
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		int GetNumSections();
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void CreateMeshSection_LinearColor(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FVector2D> UV1, TArray<struct FVector2D> UV2, TArray<struct FVector2D> UV3, TArray<struct FLinearColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void CreateMeshSection(int SectionIndex, TArray<struct FVector> Vertices, TArray<int> Triangles, TArray<struct FVector> Normals, TArray<struct FVector2D> UV0, TArray<struct FColor> VertexColors, TArray<struct FProcMeshTangent> Tangents, bool bCreateCollision);
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void ClearMeshSection(int SectionIndex);
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void ClearCollisionConvexMeshes();
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void ClearAllMeshSections();
	UFUNCTION(BlueprintCallable, Category = "ProceduralMeshComponent")
		void AddCollisionConvexMesh(TArray<struct FVector> ConvexVerts);

};