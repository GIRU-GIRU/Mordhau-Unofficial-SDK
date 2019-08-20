#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshActor.generated.h"

UCLASS()
class ASkeletalMeshActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldDoAnimNotifies : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWakeOnLevelStart : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent* SkeletalMeshComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* ReplicatedMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* ReplicatedPhysAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* ReplicatedMaterial0;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* ReplicatedMaterial1;

	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshActor")
	void OnRep_ReplicatedPhysAsset();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshActor")
		void OnRep_ReplicatedMesh();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshActor")
		void OnRep_ReplicatedMaterial1();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMeshActor")
		void OnRep_ReplicatedMaterial0();

};