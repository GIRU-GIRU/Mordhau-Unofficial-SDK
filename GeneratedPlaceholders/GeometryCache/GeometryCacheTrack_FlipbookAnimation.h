#pragma once

#include "CoreMinimal.h"
#include "GeometryCacheTrack_FlipbookAnimation.generated.h"

UCLASS()
class UGeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t NumMeshSamples;

	UFUNCTION(BlueprintCallable, Category = "GeometryCacheTrack_FlipbookAnimation")
	void AddMeshSample(const struct FGeometryCacheMeshData& MeshData, float SampleTime);

};