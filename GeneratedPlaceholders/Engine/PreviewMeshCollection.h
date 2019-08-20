#pragma once

#include "CoreMinimal.h"
#include "PreviewMeshCollection.generated.h"

UCLASS()
class UPreviewMeshCollection : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* Skeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPreviewMeshCollectionEntry> SkeletalMeshes;


};