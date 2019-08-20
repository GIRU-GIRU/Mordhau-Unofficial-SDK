#pragma once

#include "CoreMinimal.h"
#include "Actor.generated.h"

UCLASS()
class AActor : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FActorTickFunction PrimaryActorTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHidden : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetTemporary : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetStartup : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOnlyRelevantToOwner : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysRelevant : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReplicateMovement : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTearOff : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bExchangedRoles : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetLoadOnClient : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNetUseOwnerRelevancy : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRelevantForNetworkReplays : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReplayRewindable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowTickBeforeBeginPlay : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoDestroyWhenFinished : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBlockInput : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanBeDamaged : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCollideWhenPlacing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFindCameraComponentWhenViewTarget : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateOverlapEventsDuringLevelStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoresOriginShifting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableAutoLODGeneration : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsEditorOnlyActor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bActorSeamlessTraveled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReplicates : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanBeInCluster : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowReceiveTickEventOnDedicatedServer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 6;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bActorEnableCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bActorIsBeingDestroyed : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENetRole> RemoteRole;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepMovement ReplicatedMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialLifeSpan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CustomTimeDilation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRepAttachment AttachmentReplication;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* Owner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName NetDriverName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENetRole> Role;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENetDormancy> NetDormancy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAutoReceiveInput> AutoReceiveInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InputPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UInputComponent* InputComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetCullDistanceSquared;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NetTag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetUpdateFrequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinNetUpdateFrequency;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APawn* Instigator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> Children;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* RootComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AMatineeActor*> ControllingMatineeActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> Layers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UChildActorComponent> ParentComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> Tags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTakeAnyDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTakePointDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTakeRadialDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnActorBeginOverlap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnActorEndOverlap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnBeginCursorOver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnEndCursorOver;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnClicked;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnReleased;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInputTouchBegin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInputTouchEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInputTouchEnter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInputTouchLeave;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnActorHit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnDestroyed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnEndPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UActorComponent*> InstanceComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UActorComponent*> BlueprintCreatedComponents;

	UFUNCTION(BlueprintCallable, Category = "Actor")
	bool WasRecentlyRendered(float Tolerance);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void UserConstructionScript();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void TearOff();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SnapRootComponentTo(class AActor* InParentActor, const struct FName& InSocketName);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetTickGroup(TEnumAsByte<ETickingGroup> NewTickGroup);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetTickableWhenPaused(bool bTickableWhenPaused);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetReplicates(bool bInReplicates);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetReplicateMovement(bool bInReplicateMovement);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetOwner(class AActor* NewOwner);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetNetDormancy(TEnumAsByte<ENetDormancy> NewDormancy);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetLifeSpan(float InLifespan);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetActorTickInterval(float TickInterval);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetActorTickEnabled(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetActorScale3D(const struct FVector& NewScale3D);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetActorRelativeScale3D(const struct FVector& NewRelativeScale);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetActorHiddenInGame(bool bNewHidden);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void SetActorEnableCollision(bool bNewActorEnableCollision);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void RemoveTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void RemoveTickPrerequisiteActor(class AActor* PrerequisiteActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveRadialDamage(float DamageReceived, class UDamageType* DamageType, const struct FVector& Origin, const struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceivePointDamage(float Damage, class UDamageType* DamageType, const struct FVector& HitLocation, const struct FVector& HitNormal, class UPrimitiveComponent* HitComponent, const struct FName& BoneName, const struct FVector& ShotFromDirection, class AController* InstigatedBy, class AActor* DamageCauser, const struct FHitResult& HitInfo);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveDestroyed();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorOnReleased(const struct FKey& ButtonReleased);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorOnInputTouchLeave(TEnumAsByte<ETouchIndex> FingerIndex);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorOnInputTouchEnter(TEnumAsByte<ETouchIndex> FingerIndex);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorOnInputTouchEnd(TEnumAsByte<ETouchIndex> FingerIndex);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorOnInputTouchBegin(TEnumAsByte<ETouchIndex> FingerIndex);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorOnClicked(const struct FKey& ButtonPressed);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorEndOverlap(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorEndCursorOver();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorBeginOverlap(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ReceiveActorBeginCursorOver();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void PrestreamTextures(float Seconds, bool bEnableStreaming, int CinematicTextureGroups);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void OnRep_ReplicateMovement();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void OnRep_ReplicatedMovement();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void OnRep_Owner();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void OnRep_Instigator();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void OnRep_AttachmentReplication();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void MakeNoise(float Loudness, class APawn* NoiseInstigator, const struct FVector& NoiseLocation, float MaxRange, const struct FName& Tag);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class UMaterialInstanceDynamic* MakeMIDForMaterial(class UMaterialInterface* Parent);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool K2_TeleportTo(const struct FVector& DestLocation, const struct FRotator& DestRotation);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool K2_SetActorTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool K2_SetActorRotation(const struct FRotator& NewRotation, bool bTeleportPhysics);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_SetActorRelativeTransform(const struct FTransform& NewRelativeTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_SetActorRelativeRotation(const struct FRotator& NewRelativeRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_SetActorRelativeLocation(const struct FVector& NewRelativeLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool K2_SetActorLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool K2_SetActorLocation(const struct FVector& NewLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_OnReset();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_OnEndViewTarget(class APlayerController* PC);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_OnBecomeViewTarget(class APlayerController* PC);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class USceneComponent* K2_GetRootComponent();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FRotator K2_GetActorRotation();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector K2_GetActorLocation();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_DetachFromActor(EDetachmentRule LocationRule, EDetachmentRule RotationRule, EDetachmentRule ScaleRule);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_DestroyComponent(class UActorComponent* Component);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_DestroyActor();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AttachToComponent(class USceneComponent* Parent, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AttachToActor(class AActor* ParentActor, const struct FName& SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AttachRootComponentToActor(class AActor* InParentActor, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AttachRootComponentTo(class USceneComponent* InParent, const struct FName& InSocketName, TEnumAsByte<EAttachLocation> AttachLocationType, bool bWeldSimulatedBodies);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AddActorWorldTransform(const struct FTransform& DeltaTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AddActorWorldRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AddActorWorldOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AddActorLocalTransform(const struct FTransform& NewTransform, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AddActorLocalRotation(const struct FRotator& DeltaRotation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void K2_AddActorLocalOffset(const struct FVector& DeltaLocation, bool bSweep, bool bTeleport, struct FHitResult* SweepHitResult);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool IsOverlappingActor(class AActor* Other);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool IsChildActor();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool IsActorTickEnabled();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool IsActorBeingDestroyed();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool HasAuthority();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetVerticalDistanceTo(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector GetVelocity();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FTransform GetTransform();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool GetTickableWhenPaused();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetSquaredDistanceTo(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		TEnumAsByte<ENetRole> GetRemoteRole();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class UChildActorComponent* GetParentComponent();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class AActor* GetParentActor();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class AActor* GetOwner();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OverlappingComponents);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		TEnumAsByte<ENetRole> GetLocalRole();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetLifeSpan();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class AController* GetInstigatorController();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class APawn* GetInstigator();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector GetInputVectorAxisValue(const struct FKey& InputAxisKey);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetInputAxisValue(const struct FName& InputAxisName);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetInputAxisKeyValue(const struct FKey& InputAxisKey);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetHorizontalDotProductTo(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetHorizontalDistanceTo(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetGameTimeSinceCreation();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetDotProductTo(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetDistanceTo(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		TArray<class UActorComponent*> GetComponentsByTag(class UClass* ComponentClass, const struct FName& Tag);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		TArray<class UActorComponent*> GetComponentsByClass(class UClass* ComponentClass);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class UActorComponent* GetComponentByClass(class UClass* ComponentClass);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FName GetAttachParentSocketName();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class AActor* GetAttachParentActor();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void GetAttachedActors(TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void GetAllChildActors(bool bIncludeDescendants, TArray<class AActor*>* ChildActors);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector GetActorUpVector();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetActorTimeDilation();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		float GetActorTickInterval();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector GetActorScale3D();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector GetActorRightVector();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector GetActorRelativeScale3D();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		struct FVector GetActorForwardVector();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void GetActorEyesViewPoint(struct FVector* OutLocation, struct FRotator* OutRotation);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool GetActorEnableCollision();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void GetActorBounds(bool bOnlyCollidingComponents, struct FVector* Origin, struct FVector* BoxExtent);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void ForceNetUpdate();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void FlushNetDormancy();
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void EnableInput(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void DisableInput(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void DetachRootComponentFromParent(bool bMaintainWorldPosition);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void AddTickPrerequisiteComponent(class UActorComponent* PrerequisiteComponent);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		void AddTickPrerequisiteActor(class AActor* PrerequisiteActor);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		class UActorComponent* AddComponent(const struct FName& TemplateName, bool bManualAttachment, const struct FTransform& RelativeTransform, class UObject* ComponentTemplateContext);
	UFUNCTION(BlueprintCallable, Category = "Actor")
		bool ActorHasTag(const struct FName& Tag);

};