#pragma once

#include "CoreMinimal.h"
#include "HierarchicalInstancedStaticMeshComponent.generated.h"

UCLASS()
class UHierarchicalInstancedStaticMeshComponent : public UInstancedStaticMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> SortedInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumBuiltInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox BuiltInstanceBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox UnbuiltInstanceBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBox> UnbuiltInstanceBoundsList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableDensityScaling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OcclusionLayerNumNodes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBoxSphereBounds CacheMeshExtendedBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDisableCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InstanceCountToRender;

	UFUNCTION(BlueprintCallable, Category = "HierarchicalInstancedStaticMeshComponent")
	bool RemoveInstances(TArray<int> InstancesToRemove);

};