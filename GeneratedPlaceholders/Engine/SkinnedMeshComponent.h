#pragma once

#include "CoreMinimal.h"
#include "SkinnedMeshComponent.generated.h"

UCLASS()
class USkinnedMeshComponent : public UMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class USkinnedMeshComponent> MasterPoseComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* PhysicsAssetOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ForcedLodModel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideMinLod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MinLodModel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StreamingDistanceMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSkelMeshComponentLODInfo> LODInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMeshComponentUpdateFlag> MeshComponentUpdateFlag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseBoundsFromMasterPoseComponent : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceWireframe : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisplayBones : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableMorphTarget : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHideSkin : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPerBoneMotionBlur : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bComponentUseFixedSkelBounds : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bConsiderAllBodiesForBounds : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSyncAttachParentLOD : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanHighlightSelectedSections : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRecentlyRendered : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastCapsuleDirectShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastCapsuleIndirectShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCPUSkinning : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableUpdateRateOptimizations : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisplayDebugUpdateRateOptimizations : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderStatic : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData07 : 2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCachedLocalBoundsUpToDate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceMeshObjectUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CapsuleIndirectShadowMinVisibility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBoxSphereBounds CachedLocalBounds;

	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
	void UnHideBoneByName(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void TransformToBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void TransformFromBoneSpace(const struct FName& BoneName, const struct FVector& InPosition, const struct FRotator& InRotation, struct FVector* OutPosition, struct FRotator* OutRotation);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void ShowMaterialSection(int MaterialID, bool bShow, int LODIndex);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void ShowAllMaterialSections(int LODIndex);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetVertexColorOverride_LinearColor(int LODIndex, TArray<struct FLinearColor> VertexColors);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetSkinWeightOverride(int LODIndex, TArray<struct FSkelMeshSkinWeightInfo> SkinWeights);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetSkeletalMesh(class USkeletalMesh* NewMesh, bool bReinitPose);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetRenderStatic(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetPhysicsAsset(class UPhysicsAsset* NewPhysicsAsset, bool bForceReInit);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetMinLOD(int InNewMinLOD);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetMasterPoseComponent(class USkinnedMeshComponent* NewMasterBoneComponent, bool bForceUpdate);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetForcedLOD(int InNewForcedLOD);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetCastCapsuleIndirectShadow(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetCastCapsuleDirectShadow(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void SetCapsuleIndirectShadowMinVisibility(float NewValue);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		bool IsMaterialSectionShown(int MaterialID, int LODIndex);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		bool IsBoneHiddenByName(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void HideBoneByName(const struct FName& BoneName, TEnumAsByte<EPhysBodyOp> PhysBodyOption);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		struct FName GetSocketBoneName(const struct FName& InSocketName);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		struct FVector GetRefPosePosition(int BoneIndex);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		struct FName GetParentBone(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		int GetNumLODs();
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		int GetNumBones();
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		struct FName GetBoneName(int BoneIndex);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		int GetBoneIndex(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		struct FName FindClosestBone_K2(const struct FVector& TestLocation, float IgnoreScale, bool bRequirePhysicsAsset, struct FVector* BoneLocation);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void ClearVertexColorOverride(int LODIndex);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		void ClearSkinWeightOverride(int LODIndex);
	UFUNCTION(BlueprintCallable, Category = "SkinnedMeshComponent")
		bool BoneIsChildOf(const struct FName& BoneName, const struct FName& ParentBoneName);

};