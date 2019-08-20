#pragma once

#include "CoreMinimal.h"
#include "SceneComponent.generated.h"

UCLASS()
class USceneComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class APhysicsVolume> PhysicsVolume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* AttachParent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName AttachSocketName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USceneComponent*> AttachChildren;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class USceneComponent*> ClientAttachedChildren;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RelativeRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeScale3D;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ComponentVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bComponentToWorldUpdated : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData03 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbsoluteLocation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbsoluteRotation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbsoluteScale : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVisible : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHiddenInGame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldUpdatePhysicsVolume : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBoundsChangeTriggersStreamingDataRebuild : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseAttachParentBound : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData04 : 4;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAbsoluteTranslation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EComponentMobility> Mobility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDetailMode> DetailMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate PhysicsVolumeChangedDelegate;

	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
	void ToggleVisibility(bool bPropagateToChildren);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool SnapTo(class USceneComponent* InParent, const struct FName& InSocketName);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void SetWorldScale3D(const struct FVector& NewScale);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void SetVisibility(bool bNewVisibility, bool bPropagateToChildren);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void SetShouldUpdatePhysicsVolume(bool bInShouldUpdatePhysicsVolume);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void SetRelativeScale3D(const struct FVector& NewScale3D);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void SetHiddenInGame(bool NewHidden, bool bPropagateToChildren);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void SetAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void ResetRelativeTransform();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void OnRep_Visibility(bool OldValue);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void OnRep_Transform();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void OnRep_AttachSocketName();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void OnRep_AttachParent();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void OnRep_AttachChildren();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetWorldTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetWorldRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetWorldLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetWorldLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetRelativeTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetRelativeRotation(const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetRelativeLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_SetRelativeLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FTransform K2_GetComponentToWorld();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FVector K2_GetComponentScale();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FRotator K2_GetComponentRotation();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FVector K2_GetComponentLocation();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_DetachFromComponent(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule, bool bCallModify);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool K2_AttachTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachType, bool bWeldSimulatedBodies);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddRelativeRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddRelativeLocation(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddLocalTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void K2_AddLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool IsVisible();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool IsSimulatingPhysics(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool IsAnySimulatingPhysics();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FVector GetUpVector();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FTransform GetSocketTransform(const struct FName& InSocketName, TEnumAsByte<ERelativeTransformSpace> TransformSpace);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FRotator GetSocketRotation(const struct FName& InSocketName);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FQuat GetSocketQuaternion(const struct FName& InSocketName);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FVector GetSocketLocation(const struct FName& InSocketName);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool GetShouldUpdatePhysicsVolume();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FVector GetRightVector();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FTransform GetRelativeTransform();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		class APhysicsVolume* GetPhysicsVolume();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void GetParentComponents(TArray<class USceneComponent*>* Parents);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		int GetNumChildrenComponents();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FVector GetForwardVector();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FVector GetComponentVelocity();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void GetChildrenComponents(bool bIncludeAllDescendants, TArray<class USceneComponent*>* Children);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		class USceneComponent* GetChildComponent(int ChildIndex);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		struct FName GetAttachSocketName();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		class USceneComponent* GetAttachParent();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		TArray<struct FName> GetAllSocketNames();
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		bool DoesSocketExist(const struct FName& InSocketName);
	UFUNCTION(BlueprintCallable, Category = "SceneComponent")
		void DetachFromParent(bool bMaintainWorldPosition, bool bCallModify);

};