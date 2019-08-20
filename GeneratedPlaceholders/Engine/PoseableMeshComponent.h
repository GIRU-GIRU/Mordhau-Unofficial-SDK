#pragma once

#include "CoreMinimal.h"
#include "PoseableMeshComponent.generated.h"

UCLASS()
class UPoseableMeshComponent : public USkinnedMeshComponent
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
	void SetBoneTransformByName(const struct FName& BoneName, const struct FTransform& InTransform, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		void SetBoneScaleByName(const struct FName& BoneName, const struct FVector& InScale3D, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		void SetBoneRotationByName(const struct FName& BoneName, const struct FRotator& InRotation, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		void SetBoneLocationByName(const struct FName& BoneName, const struct FVector& InLocation, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		void ResetBoneTransformByName(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		struct FTransform GetBoneTransformByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		struct FVector GetBoneScaleByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		struct FRotator GetBoneRotationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		struct FVector GetBoneLocationByName(const struct FName& BoneName, TEnumAsByte<EBoneSpaces> BoneSpace);
	UFUNCTION(BlueprintCallable, Category = "PoseableMeshComponent")
		void CopyPoseFromSkeletalComponent(class USkeletalMeshComponent* InComponentToCopy);

};