#pragma once

#include "CoreMinimal.h"
#include "InstancedStaticMeshComponent.generated.h"

UCLASS()
class UInstancedStaticMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InstancingRandomSeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InstanceStartCullDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InstanceEndCullDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> InstanceReorderTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumPendingLightmaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FInstancedStaticMeshMappingInfo> CachedMappings;

	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
	bool UpdateInstanceTransform(int InstanceIndex, const struct FTransform& NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport);
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		void SetCullDistances(int StartCullDistance, int EndCullDistance);
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		bool RemoveInstance(int InstanceIndex);
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		bool GetInstanceTransform(int InstanceIndex, bool bWorldSpace, struct FTransform* OutInstanceTransform);
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		TArray<int> GetInstancesOverlappingSphere(const struct FVector& Center, float Radius, bool bSphereInWorldSpace);
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		TArray<int> GetInstancesOverlappingBox(const struct FBox& Box, bool bBoxInWorldSpace);
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		int GetInstanceCount();
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		void ClearInstances();
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		int AddInstanceWorldSpace(const struct FTransform& WorldTransform);
	UFUNCTION(BlueprintCallable, Category = "InstancedStaticMeshComponent")
		int AddInstance(const struct FTransform& InstanceTransform);

};