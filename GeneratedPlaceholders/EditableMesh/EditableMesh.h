#pragma once

#include "CoreMinimal.h"
#include "EditableMesh.generated.h"

UCLASS()
class UEditableMesh : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UEditableMeshAdapter*> Adapters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TextureCoordinateCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PendingCompactCounter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubdivisionCount;

	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
	void WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetTextureCoordinateCount(int NumTexCoords);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetSubdivisionCount(int NewSubdivisionCount);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetEdgesVertices(TArray<struct FVerticesForEdge> VerticesForEdges);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetAllowUndo(bool bInAllowUndo);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetAllowSpatialDatabase(bool bInAllowSpatialDatabase);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SetAllowCompact(bool bInAllowCompact);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		class UEditableMesh* RevertInstance();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void Revert();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void RemovePolygonPerimeterVertices(const struct FPolygonID& PolygonID, int FirstVertexNumberToRemove, int NumVerticesToRemove, bool bDeleteOrphanedVertexInstances);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void RebuildRenderMesh();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void PropagateInstanceChanges();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void MoveVertices(TArray<struct FVertexToMove> VerticesToMove);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexID STATIC_MakeVertexID(int VertexIndex);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonID STATIC_MakePolygonID(int PolygonIndex);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonGroupID STATIC_MakePolygonGroupID(int PolygonGroupIndex);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FEdgeID STATIC_MakeEdgeID(int EdgeIndex);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsValidVertex(const struct FVertexID& VertexID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsValidPolygon(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsValidEdge(const struct FEdgeID& EdgeID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsUndoAllowed();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsSpatialDatabaseAllowed();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsPreviewingSubdivisions();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsOrphanedVertex(const struct FVertexID& VertexID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsCompactAllowed();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsCommittedAsInstance();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsCommitted();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool IsBeingModified();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexID STATIC_InvalidVertexID();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonID STATIC_InvalidPolygonID();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonGroupID STATIC_InvalidPolygonGroupID();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FEdgeID STATIC_InvalidEdgeID();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void InsertPolygonPerimeterVertices(const struct FPolygonID& PolygonID, int InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes> VerticesToInsert);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void InitializeAdapters();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FEdgeID GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexID GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetVertexInstanceCount();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonID GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetVertexCount();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetVertexConnectedEdgeCount(const struct FVertexID& VertexID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FEdgeID GetVertexConnectedEdge(const struct FVertexID& VertexID, int ConnectedEdgeNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetTextureCoordinateCount();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FSubdivisionLimitData GetSubdivisionLimitData();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetSubdivisionCount();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FMeshTriangle GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int PolygonTriangleNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexInstanceID GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int PolygonVertexNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexID GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int PolygonVertexNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FEdgeID GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonID GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int PolygonNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetPolygonHoleVertices(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexID>* OutHoleVertexIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetPolygonHoleVertexInstances(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexInstanceID>* OutHoleVertexInstanceIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexInstanceID GetPolygonHoleVertexInstance(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonHoleVertexCount(const struct FPolygonID& PolygonID, int HoleNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexID GetPolygonHoleVertex(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutHoleEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonHoleEdgeCount(const struct FPolygonID& PolygonID, int HoleNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FEdgeID GetPolygonHoleEdge(const struct FPolygonID& PolygonID, int HoleNumber, int HoleEdgeNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonHoleCount(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonGroupCount();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetPolygonCount();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonGroupID GetGroupForPolygon(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonGroupID GetFirstValidPolygonGroup();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVertexID GetEdgeVertex(const struct FEdgeID& EdgeID, int EdgeVertexNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FEdgeID GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetEdgeCount();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPolygonID GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int ConnectedPolygonNumber);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void FlipPolygons(TArray<struct FPolygonID> PolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int FindPolygonHoleVertexNumberForVertex(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& VertexID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		int FindPolygonHoleEdgeNumberForVertices(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void EndModification(bool bFromUndo);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreateMissingPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutNewEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void ComputePolygonTriangulation(const struct FPolygonID& PolygonID, TArray<struct FMeshTriangle>* OutTriangles);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FPlane ComputePolygonPlane(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVector ComputePolygonNormal(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FVector ComputePolygonCenter(const struct FPolygonID& PolygonID);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FBoxSphereBounds ComputeBoundingBoxAndSphere();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		struct FBox ComputeBoundingBox();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool ComputeBarycentricWeightForPointOnPolygon(const struct FPolygonID& PolygonID, const struct FVector& PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		class UEditableMesh* CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void Commit();
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		void AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups);
	UFUNCTION(BlueprintCallable, Category = "EditableMesh")
		bool AnyChangesToUndo();

};