#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheTrack_TransformGroupAnimation.generated.h"

UCLASS()
class UGeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "GeometryCacheTrack_TransformGroupAnimation")
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

};