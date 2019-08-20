#pragma once

#include "CoreMinimal.h"
#include "Skeleton.generated.h"

UCLASS()
class USkeleton : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBoneNode> BoneTree;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTransform> RefLocalPoses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid VirtualBoneGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVirtualBone> VirtualBones;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USkeletalMeshSocket*> Sockets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSmartNameContainer SmartNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UBlendProfile*> BlendProfiles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAnimSlotGroup> SlotGroups;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;


};