#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheTrack_TransformAnimation.generated.h"

UCLASS()
class UGeometryCacheTrack_TransformAnimation : public UGeometryCacheTrack
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "GeometryCacheTrack_TransformAnimation")
	void SetMesh(const struct FGeometryCacheMeshData& NewMeshData);

};