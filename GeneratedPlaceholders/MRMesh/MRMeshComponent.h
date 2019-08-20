#pragma once

#include "CoreMinimal.h"
#include "MRMeshComponent.generated.h"

UCLASS()
class UMRMeshComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* Material;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCreateMeshProxySections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUpdateNavMeshOnMeshUpdate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBodySetup*> BodySetups;

	UFUNCTION(BlueprintCallable, Category = "MRMeshComponent")
	bool IsConnected();
	UFUNCTION(BlueprintCallable, Category = "MRMeshComponent")
		void ForceNavMeshUpdate();
	UFUNCTION(BlueprintCallable, Category = "MRMeshComponent")
		void Clear();

};