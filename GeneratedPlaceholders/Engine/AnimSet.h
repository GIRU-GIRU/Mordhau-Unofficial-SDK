#pragma once

#include "CoreMinimal.h"
#include "AnimSet.generated.h"

UCLASS()
class UAnimSet : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAnimRotationOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> TrackBoneNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimSetMeshLinkup> LinkupCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> BoneUseAnimTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> ForceUseMeshTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> UseTranslationBoneNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> ForceMeshTranslationBoneNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName PreviewSkelMeshName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName BestRatioSkelMeshName;


};