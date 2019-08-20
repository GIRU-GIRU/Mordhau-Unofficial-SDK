#pragma once

#include "CoreMinimal.h"
#include "SkeletalMeshLODSettings.generated.h"

UCLASS()
class USkeletalMeshLODSettings : public UDataAsset
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPerPlatformInt MinLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSkeletalMeshLODGroupSettings> LODGroups;


};