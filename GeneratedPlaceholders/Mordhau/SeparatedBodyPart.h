#pragma once

#include "CoreMinimal.h"
#include "SeparatedBodyPart.generated.h"

UCLASS()
class ASeparatedBodyPart : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULODSkeletalMeshComponent* Mesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh* SkeletalMeshAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class APhysicsConstraintActor> PhysicsConstraintActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AAdvancedCharacter> SourceCharacter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* HeadPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* LeftArmPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* LeftForearmPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* LeftHandPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RightArmPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RightForearmPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RightHandPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* LeftUpLegPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* LeftLegPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* LeftFootPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RightUpLegPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RightLegPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset* RightFootPhysicsAsset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* InGoreMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* InGoreMeshBlunt;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* InGoreMeshHead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName FakeRootBone;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class AActor>> InstancedGoreMeshes;

	UFUNCTION(BlueprintCallable, Category = "SeparatedBodyPart")
	void OnCosmeticHit(EMordhauDamageType DamageType, unsigned char SubType, const struct FHitResult& Hit, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "SeparatedBodyPart")
		bool IsPartiallyDismembered();
	UFUNCTION(BlueprintCallable, Category = "SeparatedBodyPart")
		bool IsDismembered(const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "SeparatedBodyPart")
		void InitializeDismemberment(class AMordhauCharacter* Source, const struct FName& bone, const struct FTransform& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce);

};