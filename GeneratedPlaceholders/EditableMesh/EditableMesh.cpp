#include "EditableMesh.h"

void UEditableMesh::WeldVertices(TArray<struct FVertexID> VertexIDs, struct FVertexID* OutNewVertexID) {
}
	void UEditableMesh::TryToRemoveVertex(const struct FVertexID& VertexID, bool* bOutWasVertexRemoved, struct FEdgeID* OutNewEdgeID) {
}
	void UEditableMesh::TryToRemovePolygonEdge(const struct FEdgeID& EdgeID, bool* bOutWasEdgeRemoved, struct FPolygonID* OutNewPolygonID) {
}
	void UEditableMesh::TriangulatePolygons(TArray<struct FPolygonID> PolygonIDs, TArray<struct FPolygonID>* OutNewTrianglePolygons) {
}
	void UEditableMesh::TessellatePolygons(TArray<struct FPolygonID> PolygonIDs, ETriangleTessellationMode TriangleTessellationMode, TArray<struct FPolygonID>* OutNewPolygonIDs) {
}
	void UEditableMesh::StartModification(EMeshModificationType MeshModificationType, EMeshTopologyChange MeshTopologyChange) {
}
	void UEditableMesh::SplitPolygons(TArray<struct FPolygonToSplit> PolygonsToSplit, TArray<struct FEdgeID>* OutNewEdgeIDs) {
}
	void UEditableMesh::SplitEdge(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FVertexID>* OutNewVertexIDs) {
}
	void UEditableMesh::SetVerticesCornerSharpness(TArray<struct FVertexID> VertexIDs, TArray<float> VerticesNewCornerSharpness) {
}
	void UEditableMesh::SetVerticesAttributes(TArray<struct FAttributesForVertex> AttributesForVertices) {
}
	void UEditableMesh::SetVertexInstancesAttributes(TArray<struct FAttributesForVertexInstance> AttributesForVertexInstances) {
}
	void UEditableMesh::SetTextureCoordinateCount(int NumTexCoords) {
}
	void UEditableMesh::SetSubdivisionCount(int NewSubdivisionCount) {
}
	void UEditableMesh::SetPolygonsVertexAttributes(TArray<struct FVertexAttributesForPolygon> VertexAttributesForPolygons) {
}
	void UEditableMesh::SetEdgesVertices(TArray<struct FVerticesForEdge> VerticesForEdges) {
}
	void UEditableMesh::SetEdgesHardnessAutomatically(TArray<struct FEdgeID> EdgeIDs, float MaxDotProductForSoftEdge) {
}
	void UEditableMesh::SetEdgesHardness(TArray<struct FEdgeID> EdgeIDs, TArray<bool> EdgesNewIsHard) {
}
	void UEditableMesh::SetEdgesCreaseSharpness(TArray<struct FEdgeID> EdgeIDs, TArray<float> EdgesNewCreaseSharpness) {
}
	void UEditableMesh::SetEdgesAttributes(TArray<struct FAttributesForEdge> AttributesForEdges) {
}
	void UEditableMesh::SetAllowUndo(bool bInAllowUndo) {
}
	void UEditableMesh::SetAllowSpatialDatabase(bool bInAllowSpatialDatabase) {
}
	void UEditableMesh::SetAllowCompact(bool bInAllowCompact) {
}
	void UEditableMesh::SearchSpatialDatabaseForPolygonsPotentiallyIntersectingLineSegment(const struct FVector& LineSegmentStart, const struct FVector& LineSegmentEnd, TArray<struct FPolygonID>* OutPolygons) {
}
	class UEditableMesh* UEditableMesh::RevertInstance() {
}
	void UEditableMesh::Revert() {
}
	void UEditableMesh::RemovePolygonPerimeterVertices(const struct FPolygonID& PolygonID, int FirstVertexNumberToRemove, int NumVerticesToRemove, bool bDeleteOrphanedVertexInstances) {
}
	void UEditableMesh::RebuildRenderMesh() {
}
	void UEditableMesh::QuadrangulateMesh(TArray<struct FPolygonID>* OutNewPolygonIDs) {
}
	void UEditableMesh::PropagateInstanceChanges() {
}
	void UEditableMesh::MoveVertices(TArray<struct FVertexToMove> VerticesToMove) {
}
	struct FVertexID UEditableMesh::STATIC_MakeVertexID(int VertexIndex) {
}
	struct FPolygonID UEditableMesh::STATIC_MakePolygonID(int PolygonIndex) {
}
	struct FPolygonGroupID UEditableMesh::STATIC_MakePolygonGroupID(int PolygonGroupIndex) {
}
	struct FEdgeID UEditableMesh::STATIC_MakeEdgeID(int EdgeIndex) {
}
	bool UEditableMesh::IsValidVertex(const struct FVertexID& VertexID) {
}
	bool UEditableMesh::IsValidPolygonGroup(const struct FPolygonGroupID& PolygonGroupID) {
}
	bool UEditableMesh::IsValidPolygon(const struct FPolygonID& PolygonID) {
}
	bool UEditableMesh::IsValidEdge(const struct FEdgeID& EdgeID) {
}
	bool UEditableMesh::IsUndoAllowed() {
}
	bool UEditableMesh::IsSpatialDatabaseAllowed() {
}
	bool UEditableMesh::IsPreviewingSubdivisions() {
}
	bool UEditableMesh::IsOrphanedVertex(const struct FVertexID& VertexID) {
}
	bool UEditableMesh::IsCompactAllowed() {
}
	bool UEditableMesh::IsCommittedAsInstance() {
}
	bool UEditableMesh::IsCommitted() {
}
	bool UEditableMesh::IsBeingModified() {
}
	struct FVertexID UEditableMesh::STATIC_InvalidVertexID() {
}
	struct FPolygonID UEditableMesh::STATIC_InvalidPolygonID() {
}
	struct FPolygonGroupID UEditableMesh::STATIC_InvalidPolygonGroupID() {
}
	struct FEdgeID UEditableMesh::STATIC_InvalidEdgeID() {
}
	void UEditableMesh::InsetPolygons(TArray<struct FPolygonID> PolygonIDs, float InsetFixedDistance, float InsetProgressTowardCenter, EInsetPolygonsMode Mode, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs) {
}
	void UEditableMesh::InsertPolygonPerimeterVertices(const struct FPolygonID& PolygonID, int InsertBeforeVertexNumber, TArray<struct FVertexAndAttributes> VerticesToInsert) {
}
	void UEditableMesh::InsertEdgeLoop(const struct FEdgeID& EdgeID, TArray<float> Splits, TArray<struct FEdgeID>* OutNewEdgeIDs) {
}
	void UEditableMesh::InitializeAdapters() {
}
	struct FEdgeID UEditableMesh::GetVertexPairEdge(const struct FVertexID& VertexID, const struct FVertexID& NextVertexID, bool* bOutEdgeWindingIsReversed) {
}
	struct FVertexID UEditableMesh::GetVertexInstanceVertex(const struct FVertexInstanceID& VertexInstanceID) {
}
	int UEditableMesh::GetVertexInstanceCount() {
}
	void UEditableMesh::GetVertexInstanceConnectedPolygons(const struct FVertexInstanceID& VertexInstanceID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) {
}
	int UEditableMesh::GetVertexInstanceConnectedPolygonCount(const struct FVertexInstanceID& VertexInstanceID) {
}
	struct FPolygonID UEditableMesh::GetVertexInstanceConnectedPolygon(const struct FVertexInstanceID& VertexInstanceID, int ConnectedPolygonNumber) {
}
	int UEditableMesh::GetVertexCount() {
}
	void UEditableMesh::GetVertexConnectedPolygons(const struct FVertexID& VertexID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) {
}
	void UEditableMesh::GetVertexConnectedEdges(const struct FVertexID& VertexID, TArray<struct FEdgeID>* OutConnectedEdgeIDs) {
}
	int UEditableMesh::GetVertexConnectedEdgeCount(const struct FVertexID& VertexID) {
}
	struct FEdgeID UEditableMesh::GetVertexConnectedEdge(const struct FVertexID& VertexID, int ConnectedEdgeNumber) {
}
	void UEditableMesh::GetVertexAdjacentVertices(const struct FVertexID& VertexID, TArray<struct FVertexID>* OutAdjacentVertexIDs) {
}
	int UEditableMesh::GetTextureCoordinateCount() {
}
	struct FSubdivisionLimitData UEditableMesh::GetSubdivisionLimitData() {
}
	int UEditableMesh::GetSubdivisionCount() {
}
	int UEditableMesh::GetPolygonTriangulatedTriangleCount(const struct FPolygonID& PolygonID) {
}
	struct FMeshTriangle UEditableMesh::GetPolygonTriangulatedTriangle(const struct FPolygonID& PolygonID, int PolygonTriangleNumber) {
}
	void UEditableMesh::GetPolygonPerimeterVertices(const struct FPolygonID& PolygonID, TArray<struct FVertexID>* OutPolygonPerimeterVertexIDs) {
}
	void UEditableMesh::GetPolygonPerimeterVertexInstances(const struct FPolygonID& PolygonID, TArray<struct FVertexInstanceID>* OutPolygonPerimeterVertexInstanceIDs) {
}
	struct FVertexInstanceID UEditableMesh::GetPolygonPerimeterVertexInstance(const struct FPolygonID& PolygonID, int PolygonVertexNumber) {
}
	int UEditableMesh::GetPolygonPerimeterVertexCount(const struct FPolygonID& PolygonID) {
}
	struct FVertexID UEditableMesh::GetPolygonPerimeterVertex(const struct FPolygonID& PolygonID, int PolygonVertexNumber) {
}
	void UEditableMesh::GetPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutPolygonPerimeterEdgeIDs) {
}
	int UEditableMesh::GetPolygonPerimeterEdgeCount(const struct FPolygonID& PolygonID) {
}
	struct FEdgeID UEditableMesh::GetPolygonPerimeterEdge(const struct FPolygonID& PolygonID, int PerimeterEdgeNumber, bool* bOutEdgeWindingIsReversedForPolygon) {
}
	struct FPolygonID UEditableMesh::GetPolygonInGroup(const struct FPolygonGroupID& PolygonGroupID, int PolygonNumber) {
}
	void UEditableMesh::GetPolygonHoleVertices(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexID>* OutHoleVertexIDs) {
}
	void UEditableMesh::GetPolygonHoleVertexInstances(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FVertexInstanceID>* OutHoleVertexInstanceIDs) {
}
	struct FVertexInstanceID UEditableMesh::GetPolygonHoleVertexInstance(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber) {
}
	int UEditableMesh::GetPolygonHoleVertexCount(const struct FPolygonID& PolygonID, int HoleNumber) {
}
	struct FVertexID UEditableMesh::GetPolygonHoleVertex(const struct FPolygonID& PolygonID, int HoleNumber, int PolygonVertexNumber) {
}
	void UEditableMesh::GetPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutHoleEdgeIDs) {
}
	int UEditableMesh::GetPolygonHoleEdgeCount(const struct FPolygonID& PolygonID, int HoleNumber) {
}
	struct FEdgeID UEditableMesh::GetPolygonHoleEdge(const struct FPolygonID& PolygonID, int HoleNumber, int HoleEdgeNumber) {
}
	int UEditableMesh::GetPolygonHoleCount(const struct FPolygonID& PolygonID) {
}
	int UEditableMesh::GetPolygonGroupCount() {
}
	int UEditableMesh::GetPolygonCountInGroup(const struct FPolygonGroupID& PolygonGroupID) {
}
	int UEditableMesh::GetPolygonCount() {
}
	void UEditableMesh::GetPolygonAdjacentPolygons(const struct FPolygonID& PolygonID, TArray<struct FPolygonID>* OutAdjacentPolygons) {
}
	struct FPolygonGroupID UEditableMesh::GetGroupForPolygon(const struct FPolygonID& PolygonID) {
}
	struct FPolygonGroupID UEditableMesh::GetFirstValidPolygonGroup() {
}
	void UEditableMesh::GetEdgeVertices(const struct FEdgeID& EdgeID, struct FVertexID* OutEdgeVertexID0, struct FVertexID* OutEdgeVertexID1) {
}
	struct FVertexID UEditableMesh::GetEdgeVertex(const struct FEdgeID& EdgeID, int EdgeVertexNumber) {
}
	struct FEdgeID UEditableMesh::GetEdgeThatConnectsVertices(const struct FVertexID& VertexID0, const struct FVertexID& VertexID1) {
}
	void UEditableMesh::GetEdgeLoopElements(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* EdgeLoopIDs) {
}
	int UEditableMesh::GetEdgeCount() {
}
	void UEditableMesh::GetEdgeConnectedPolygons(const struct FEdgeID& EdgeID, TArray<struct FPolygonID>* OutConnectedPolygonIDs) {
}
	int UEditableMesh::GetEdgeConnectedPolygonCount(const struct FEdgeID& EdgeID) {
}
	struct FPolygonID UEditableMesh::GetEdgeConnectedPolygon(const struct FEdgeID& EdgeID, int ConnectedPolygonNumber) {
}
	void UEditableMesh::GeneratePolygonTangentsAndNormals(TArray<struct FPolygonID> PolygonIDs) {
}
	void UEditableMesh::FlipPolygons(TArray<struct FPolygonID> PolygonIDs) {
}
	int UEditableMesh::FindPolygonPerimeterVertexNumberForVertex(const struct FPolygonID& PolygonID, const struct FVertexID& VertexID) {
}
	int UEditableMesh::FindPolygonPerimeterEdgeNumberForVertices(const struct FPolygonID& PolygonID, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1) {
}
	void UEditableMesh::FindPolygonLoop(const struct FEdgeID& EdgeID, TArray<struct FEdgeID>* OutEdgeLoopEdgeIDs, TArray<struct FEdgeID>* OutFlippedEdgeIDs, TArray<struct FEdgeID>* OutReversedEdgeIDPathToTake, TArray<struct FPolygonID>* OutPolygonIDsToSplit) {
}
	int UEditableMesh::FindPolygonHoleVertexNumberForVertex(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& VertexID) {
}
	int UEditableMesh::FindPolygonHoleEdgeNumberForVertices(const struct FPolygonID& PolygonID, int HoleNumber, const struct FVertexID& EdgeVertexID0, const struct FVertexID& EdgeVertexID1) {
}
	void UEditableMesh::ExtrudePolygons(TArray<struct FPolygonID> Polygons, float ExtrudeDistance, bool bKeepNeighborsTogether, TArray<struct FPolygonID>* OutNewExtrudedFrontPolygons) {
}
	void UEditableMesh::ExtendVertices(TArray<struct FVertexID> VertexIDs, bool bOnlyExtendClosestEdge, const struct FVector& ReferencePosition, TArray<struct FVertexID>* OutNewExtendedVertexIDs) {
}
	void UEditableMesh::ExtendEdges(TArray<struct FEdgeID> EdgeIDs, bool bWeldNeighbors, TArray<struct FEdgeID>* OutNewExtendedEdgeIDs) {
}
	void UEditableMesh::EndModification(bool bFromUndo) {
}
	void UEditableMesh::DeleteVertexInstances(TArray<struct FVertexInstanceID> VertexInstanceIDsToDelete, bool bDeleteOrphanedVertices) {
}
	void UEditableMesh::DeleteVertexAndConnectedEdgesAndPolygons(const struct FVertexID& VertexID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
}
	void UEditableMesh::DeletePolygons(TArray<struct FPolygonID> PolygonIDsToDelete, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
}
	void UEditableMesh::DeletePolygonGroups(TArray<struct FPolygonGroupID> PolygonGroupIDs) {
}
	void UEditableMesh::DeleteOrphanVertices(TArray<struct FVertexID> VertexIDsToDelete) {
}
	void UEditableMesh::DeleteEdges(TArray<struct FEdgeID> EdgeIDsToDelete, bool bDeleteOrphanedVertices) {
}
	void UEditableMesh::DeleteEdgeAndConnectedPolygons(const struct FEdgeID& EdgeID, bool bDeleteOrphanedEdges, bool bDeleteOrphanedVertices, bool bDeleteOrphanedVertexInstances, bool bDeleteEmptyPolygonGroups) {
}
	void UEditableMesh::CreateVertices(TArray<struct FVertexToCreate> VerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs) {
}
	void UEditableMesh::CreateVertexInstances(TArray<struct FVertexInstanceToCreate> VertexInstancesToCreate, TArray<struct FVertexInstanceID>* OutNewVertexInstanceIDs) {
}
	void UEditableMesh::CreatePolygons(TArray<struct FPolygonToCreate> PolygonsToCreate, TArray<struct FPolygonID>* OutNewPolygonIDs, TArray<struct FEdgeID>* OutNewEdgeIDs) {
}
	void UEditableMesh::CreatePolygonGroups(TArray<struct FPolygonGroupToCreate> PolygonGroupsToCreate, TArray<struct FPolygonGroupID>* OutNewPolygonGroupIDs) {
}
	void UEditableMesh::CreateMissingPolygonPerimeterEdges(const struct FPolygonID& PolygonID, TArray<struct FEdgeID>* OutNewEdgeIDs) {
}
	void UEditableMesh::CreateMissingPolygonHoleEdges(const struct FPolygonID& PolygonID, int HoleNumber, TArray<struct FEdgeID>* OutNewEdgeIDs) {
}
	void UEditableMesh::CreateEmptyVertexRange(int NumVerticesToCreate, TArray<struct FVertexID>* OutNewVertexIDs) {
}
	void UEditableMesh::CreateEdges(TArray<struct FEdgeToCreate> EdgesToCreate, TArray<struct FEdgeID>* OutNewEdgeIDs) {
}
	void UEditableMesh::ComputePolygonTriangulation(const struct FPolygonID& PolygonID, TArray<struct FMeshTriangle>* OutTriangles) {
}
	void UEditableMesh::ComputePolygonsSharedEdges(TArray<struct FPolygonID> PolygonIDs, TArray<struct FEdgeID>* OutSharedEdgeIDs) {
}
	struct FPlane UEditableMesh::ComputePolygonPlane(const struct FPolygonID& PolygonID) {
}
	struct FVector UEditableMesh::ComputePolygonNormal(const struct FPolygonID& PolygonID) {
}
	struct FVector UEditableMesh::ComputePolygonCenter(const struct FPolygonID& PolygonID) {
}
	struct FBoxSphereBounds UEditableMesh::ComputeBoundingBoxAndSphere() {
}
	struct FBox UEditableMesh::ComputeBoundingBox() {
}
	bool UEditableMesh::ComputeBarycentricWeightForPointOnPolygon(const struct FPolygonID& PolygonID, const struct FVector& PointOnPolygon, struct FMeshTriangle* OutTriangle, struct FVector* OutTriangleVertexWeights) {
}
	class UEditableMesh* UEditableMesh::CommitInstance(class UPrimitiveComponent* ComponentToInstanceTo) {
}
	void UEditableMesh::Commit() {
}
	void UEditableMesh::ChangePolygonsVertexInstances(TArray<struct FChangeVertexInstancesForPolygon> VertexInstancesForPolygons) {
}
	void UEditableMesh::BevelPolygons(TArray<struct FPolygonID> PolygonIDs, float BevelFixedDistance, float BevelProgressTowardCenter, TArray<struct FPolygonID>* OutNewCenterPolygonIDs, TArray<struct FPolygonID>* OutNewSidePolygonIDs) {
}
	void UEditableMesh::AssignPolygonsToPolygonGroups(TArray<struct FPolygonGroupForPolygon> PolygonGroupForPolygons, bool bDeleteOrphanedPolygonGroups) {
}
	bool UEditableMesh::AnyChangesToUndo() {
}
