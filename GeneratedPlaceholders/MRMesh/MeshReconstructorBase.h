#pragma once

#include "CoreMinimal.h"
#include "MeshReconstructorBase.generated.h"

UCLASS()
class UMeshReconstructorBase : public UObject
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "MeshReconstructorBase")
	void StopReconstruction();
	UFUNCTION(BlueprintCallable, Category = "MeshReconstructorBase")
		void StartReconstruction();
	UFUNCTION(BlueprintCallable, Category = "MeshReconstructorBase")
		void PauseReconstruction();
	UFUNCTION(BlueprintCallable, Category = "MeshReconstructorBase")
		bool IsReconstructionStarted();
	UFUNCTION(BlueprintCallable, Category = "MeshReconstructorBase")
		bool IsReconstructionPaused();
	UFUNCTION(BlueprintCallable, Category = "MeshReconstructorBase")
		void DisconnectMRMesh();
	UFUNCTION(BlueprintCallable, Category = "MeshReconstructorBase")
		void ConnectMRMesh(class UMRMeshComponent* Mesh);

};