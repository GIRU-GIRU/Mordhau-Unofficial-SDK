#pragma once

#include "CoreMinimal.h"
#include "SkeletalMesh.generated.h"

UCLASS()
class USkeletalMesh : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeleton* Skeleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBoxSphereBounds ImportedBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBoxSphereBounds ExtendedBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PositiveBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector NegativeBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSkeletalMaterial> Materials;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBoneMirrorInfo> SkelMirrorTable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAxis> SkelMirrorAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAxis> SkelMirrorFlipAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSkeletalMeshLODInfo> LODInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPerPlatformInt MinLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFullPrecisionUVs : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseHighPrecisionTangentBasis : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasBeenSimplified : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasVertexColors : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData02 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnablePerPolyCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* BodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* PhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* ShadowPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UNodeMappingContainer*> NodeMappingData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMorphTarget*> MorphTargets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FClothingAssetData_Legacy> ClothingAssets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PostProcessAnimBlueprint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClothingAssetBase*> MeshClothingAssets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSkeletalMeshSamplingInfo SamplingInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USkeletalMeshSocket*> Sockets;

	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
	void SetLODSettings(class USkeletalMeshLODSettings* InLODSettings);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		int NumSockets();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		bool IsSectionUsingCloth(int InSectionIndex, bool bCheckCorrespondingSections);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		class USkeletalMeshSocket* GetSocketByIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		class UNodeMappingContainer* GetNodeMappingContainer(class UBlueprint* SourceAsset);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		struct FBoxSphereBounds GetImportedBounds();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		struct FBoxSphereBounds GetBounds();
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		class USkeletalMeshSocket* FindSocketAndIndex(const struct FName& InSocketName, int* OutIndex);
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		class USkeletalMeshSocket* FindSocket(const struct FName& InSocketName);

};