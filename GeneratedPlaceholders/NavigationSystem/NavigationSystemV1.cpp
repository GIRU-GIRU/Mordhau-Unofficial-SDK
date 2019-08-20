#include "NavigationSystemV1.h"

void UNavigationSystemV1::UnregisterNavigationInvoker(class AActor* Invoker) {
}
	void UNavigationSystemV1::STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal) {
}
	void UNavigationSystemV1::STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal) {
}
	void UNavigationSystemV1::SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs) {
}
	void UNavigationSystemV1::SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode) {
}
	void UNavigationSystemV1::ResetMaxSimultaneousTileGenerationJobsCount() {
}
	void UNavigationSystemV1::RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius) {
}
	struct FVector UNavigationSystemV1::STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent) {
}
	void UNavigationSystemV1::OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume) {
}
	bool UNavigationSystemV1::STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation) {
}
	bool UNavigationSystemV1::STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation) {
}
	bool UNavigationSystemV1::STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation) {
}
	bool UNavigationSystemV1::STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation) {
}
	bool UNavigationSystemV1::STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject) {
}
	bool UNavigationSystemV1::STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject) {
}
	struct FVector UNavigationSystemV1::STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass) {
}
	struct FVector UNavigationSystemV1::STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass) {
}
	TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength) {
}
	TEnumAsByte<ENavigationQueryResult> UNavigationSystemV1::STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost) {
}
	class UNavigationSystemV1* UNavigationSystemV1::STATIC_GetNavigationSystem(class UObject* WorldContextObject) {
}
	class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass) {
}
	class UNavigationPath* UNavigationSystemV1::STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass) {
}
