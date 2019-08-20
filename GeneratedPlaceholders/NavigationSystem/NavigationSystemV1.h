#pragma once

#include "CoreMinimal.h"
#include "NavigationSystemV1.generated.h"

UCLASS()
class UNavigationSystemV1 : public UNavigationSystemBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ANavigationData* MainNavData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ANavigationData* AbstractNavData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* CrowdManagerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoCreateNavigationData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSpawnNavDataInNavBoundsLevel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowClientSideNavigation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldDiscardSubLevelNavData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTickWhilePaused : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportRebuilding : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInitialBuildingLocked : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSkipAgentHeightCheckWhenPickingNavData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ENavDataGatheringModeConfig DataGatheringMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateNavigationOnlyAroundNavigationInvokers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ActiveTilesUpdateInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNavDataConfig> SupportedAgents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DirtyAreasUpdateFreq;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ANavigationData*> NavDataSet;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ANavigationData*> NavDataRegistrationQueue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnNavDataRegisteredEvent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnNavigationGenerationFinishedDelegate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFNavigationSystemRunMode OperationMode;

	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
	void UnregisterNavigationInvoker(class AActor* Invoker);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		void STATIC_SimpleMoveToLocation(class AController* Controller, const struct FVector& Goal);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		void STATIC_SimpleMoveToActor(class AController* Controller, class AActor* Goal);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		void SetMaxSimultaneousTileGenerationJobsCount(int MaxNumberOfJobs);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		void SetGeometryGatheringMode(ENavDataGatheringModeConfig NewMode);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		void ResetMaxSimultaneousTileGenerationJobsCount();
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		void RegisterNavigationInvoker(class AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		struct FVector STATIC_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		void OnNavigationBoundsUpdated(class ANavMeshBoundsVolume* NavVolume);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		bool STATIC_NavigationRaycast(class UObject* WorldContextObject, const struct FVector& RayStart, const struct FVector& RayEnd, class UClass* FilterClass, class AController* Querier, struct FVector* HitLocation);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		bool STATIC_K2_ProjectPointToNavigation(class UObject* WorldContextObject, const struct FVector& Point, class ANavigationData* NavData, class UClass* FilterClass, const struct FVector& QueryExtent, struct FVector* ProjectedLocation);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		bool STATIC_K2_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		bool STATIC_K2_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass, struct FVector* RandomLocation);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		bool STATIC_IsNavigationBeingBuiltOrLocked(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		bool STATIC_IsNavigationBeingBuilt(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		struct FVector STATIC_GetRandomReachablePointInRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		struct FVector STATIC_GetRandomPointInNavigableRadius(class UObject* WorldContextObject, const struct FVector& Origin, float Radius, class ANavigationData* NavData, class UClass* FilterClass);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		TEnumAsByte<ENavigationQueryResult> STATIC_GetPathLength(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathLength);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		TEnumAsByte<ENavigationQueryResult> STATIC_GetPathCost(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class ANavigationData* NavData, class UClass* FilterClass, float* PathCost);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		class UNavigationSystemV1* STATIC_GetNavigationSystem(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		class UNavigationPath* STATIC_FindPathToLocationSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, const struct FVector& PathEnd, class AActor* PathfindingContext, class UClass* FilterClass);
	UFUNCTION(BlueprintCallable, Category = "NavigationSystemV1")
		class UNavigationPath* STATIC_FindPathToActorSynchronously(class UObject* WorldContextObject, const struct FVector& PathStart, class AActor* GoalActor, float TetherDistance, class AActor* PathfindingContext, class UClass* FilterClass);

};