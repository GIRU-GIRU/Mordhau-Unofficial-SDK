#pragma once

#include "CoreMinimal.h"
#include "AnimationAsset.generated.h"

UCLASS()
class UAnimationAsset : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* Skeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAnimMetaData*> MetaData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;


};