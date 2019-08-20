#pragma once

#include "CoreMinimal.h"
#include "CustomMeshComponent.generated.h"

UCLASS()
class UCustomMeshComponent : public UMeshComponent
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "CustomMeshComponent")
	bool SetCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);
	UFUNCTION(BlueprintCallable, Category = "CustomMeshComponent")
		void ClearCustomMeshTriangles();
	UFUNCTION(BlueprintCallable, Category = "CustomMeshComponent")
		void AddCustomMeshTriangles(TArray<struct FCustomMeshTriangle> Triangles);

};