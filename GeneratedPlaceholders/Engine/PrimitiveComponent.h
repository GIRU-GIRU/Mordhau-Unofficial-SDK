#pragma once

#include "CoreMinimal.h"
#include "PrimitiveComponent.generated.h"

UCLASS()
class UPrimitiveComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDrawDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LDMaxDrawDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CachedMaxDrawDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESceneDepthPriorityGroup> DepthPriorityGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESceneDepthPriorityGroup> ViewOwnerDepthPriorityGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EIndirectLightingCacheQuality> IndirectLightingCacheQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ELightmapType LightmapType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNeverDistanceCull : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 4;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysCreatePhysicsState : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateOverlapEvents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMultiBodyOverlap : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCheckAsyncSceneOnMove : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTraceComplexOnMove : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReturnMaterialOnMove : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseViewOwnerDepthPriorityGroup : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowCullDistanceVolume : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasMotionBlurVelocityMeshes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVisibleInReflectionCaptures : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderInMainPass : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderInMono : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReceivesDecals : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOwnerNoSee : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOnlyOwnerSee : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTreatAsBackgroundForOcclusion : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseAsOccluder : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSelectable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceMipStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasPerInstanceHitProxies : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectDynamicIndirectLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectDistanceFieldLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastDynamicShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastStaticShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastVolumetricTranslucentShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSelfShadowOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastFarShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastInsetShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastCinematicShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastHiddenShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastShadowAsTwoSided : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLightAsIfStatic : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLightAttachmentsAsGroup : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReceiveMobileCSMShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSingleSampleShadowFromStationaryLights : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreRadialImpulse : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreRadialForce : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyImpulseOnDamage : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AlwaysLoadOnClient : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AlwaysLoadOnServer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseEditorCompositing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderCustomDepth : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHasCustomNavigableGeometry> bHasCustomNavigableGeometry;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECanBeCharacterBase> CanCharacterStepUpOn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightingChannels LightingChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ERendererStencilMask CustomDepthStencilWriteMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CustomDepthStencilValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TranslucencySortPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int VisibilityId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LpvBiasMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BoundsScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastSubmitTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRenderTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastRenderTimeOnScreen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> MoveIgnoreActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UPrimitiveComponent*> MoveIgnoreComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBodyInstance BodyInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnComponentHit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnComponentBeginOverlap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnComponentEndOverlap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnComponentWake;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnComponentSleep;
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
	class UPrimitiveComponent* LODParentPrimitive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPrimitiveComponentPostPhysicsTickFunction PostPhysicsComponentTick;

	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
	void WakeRigidBody(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void WakeAllRigidBodies();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetWalkableSlopeOverride(const struct FWalkableSlopeOverride& NewOverride);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetUseCCD(bool InUseCCD, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetTranslucentSortPriority(int NewTranslucentSortPriority);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetSingleSampleShadowFromStationaryLights(bool bNewSingleSampleShadowFromStationaryLights);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetSimulatePhysics(bool bSimulate);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetRenderInMono(bool bValue);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetRenderInMainPass(bool bValue);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetRenderCustomDepth(bool bValue);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetReceivesDecals(bool bNewReceivesDecals);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysMaterialOverride(class UPhysicalMaterial* NewPhysMaterial);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysicsMaxAngularVelocityInRadians(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysicsMaxAngularVelocityInDegrees(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysicsMaxAngularVelocity(float NewMaxAngVel, bool bAddToCurrent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetOwnerNoSee(bool bNewOwnerNoSee);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetOnlyOwnerSee(bool bNewOnlyOwnerSee);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetNotifyRigidBodyCollision(bool bNewNotifyRigidBodyCollision);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetMaterialByName(const struct FName& MaterialSlotName, class UMaterialInterface* Material);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetMaterial(int ElementIndex, class UMaterialInterface* Material);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetMassScale(const struct FName& BoneName, float InMassScale);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetMassOverrideInKg(const struct FName& BoneName, float MassInKg, bool bOverrideMass);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetLockedAxis(TEnumAsByte<EDOFMode> LockedAxis);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetLinearDamping(float InDamping);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetGenerateOverlapEvents(bool bInGenerateOverlapEvents);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetEnableGravity(bool bGravityEnabled);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCustomDepthStencilWriteMask(ERendererStencilMask WriteMaskBit);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCustomDepthStencilValue(int Value);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCullDistance(float NewCullDistance);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetConstraintMode(TEnumAsByte<EDOFMode> ConstraintMode);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel, TEnumAsByte<ECollisionResponse> NewResponse);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCollisionResponseToAllChannels(TEnumAsByte<ECollisionResponse> NewResponse);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCollisionProfileName(const struct FName& InCollisionProfileName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCollisionObjectType(TEnumAsByte<ECollisionChannel> Channel);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCollisionEnabled(TEnumAsByte<ECollisionEnabled> NewType);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCenterOfMass(const struct FVector& CenterOfMassOffset, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetCastShadow(bool NewCastShadow);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetBoundsScale(float NewBoundsScale);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetAngularDamping(float InDamping);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetAllUseCCD(bool InUseCCD);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetAllPhysicsLinearVelocity(const struct FVector& NewVel, bool bAddToCurrent);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetAllPhysicsAngularVelocityInRadians(const struct FVector& NewAngVel, bool bAddToCurrent);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetAllPhysicsAngularVelocityInDegrees(const struct FVector& NewAngVel, bool bAddToCurrent);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetAllPhysicsAngularVelocity(const struct FVector& NewAngVel, bool bAddToCurrent);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void SetAllMassScale(float InMassScale);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector ScaleByMomentOfInertia(const struct FVector& InputVector, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void PutRigidBodyToSleep(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool K2_LineTraceComponent(const struct FVector& TraceStart, const struct FVector& TraceEnd, bool bTraceComplex, bool bShowTrace, struct FVector* HitLocation, struct FVector* HitNormal, struct FName* BoneName, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool K2_IsQueryCollisionEnabled();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool K2_IsPhysicsCollisionEnabled();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool K2_IsCollisionEnabled();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool IsOverlappingComponent(class UPrimitiveComponent* OtherComp);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool IsOverlappingActor(class AActor* Other);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool IsGravityEnabled();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool IsAnyRigidBodyAwake();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void IgnoreComponentWhenMoving(class UPrimitiveComponent* Component, bool bShouldIgnore);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void IgnoreActorWhenMoving(class AActor* Actor, bool bShouldIgnore);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FWalkableSlopeOverride GetWalkableSlopeOverride();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector GetPhysicsLinearVelocityAtPoint(const struct FVector& Point, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector GetPhysicsLinearVelocity(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector GetPhysicsAngularVelocityInRadians(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector GetPhysicsAngularVelocityInDegrees(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector GetPhysicsAngularVelocity(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void GetOverlappingComponents(TArray<class UPrimitiveComponent*>* OutOverlappingComponents);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void GetOverlappingActors(class UClass* ClassFilter, TArray<class AActor*>* OverlappingActors);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		int GetNumMaterials();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		class UMaterialInterface* GetMaterialFromCollisionFaceIndex(int FaceIndex, int* SectionIndex);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		class UMaterialInterface* GetMaterial(int ElementIndex);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		float GetMassScale(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		float GetMass();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		float GetLinearDamping();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector GetInertiaTensor(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool GetGenerateOverlapEvents();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		TEnumAsByte<ECollisionResponse> GetCollisionResponseToChannel(TEnumAsByte<ECollisionChannel> Channel);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FName GetCollisionProfileName();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		TEnumAsByte<ECollisionChannel> GetCollisionObjectType();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		TEnumAsByte<ECollisionEnabled> GetCollisionEnabled();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		float GetClosestPointOnCollision(const struct FVector& Point, const struct FName& BoneName, struct FVector* OutPointOnBody);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		struct FVector GetCenterOfMass(const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		float GetAngularDamping();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		class UMaterialInstanceDynamic* CreateDynamicMaterialInstance(int ElementIndex, class UMaterialInterface* SourceMaterial, const struct FName& OptionalName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamicFromMaterial(int ElementIndex, class UMaterialInterface* Parent);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		class UMaterialInstanceDynamic* CreateAndSetMaterialInstanceDynamic(int ElementIndex);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		TArray<class UPrimitiveComponent*> CopyArrayOfMoveIgnoreComponents();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		TArray<class AActor*> CopyArrayOfMoveIgnoreActors();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void ClearMoveIgnoreComponents();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void ClearMoveIgnoreActors();
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		bool CanCharacterStepUp(class APawn* Pawn);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddTorqueInRadians(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddTorqueInDegrees(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddTorque(const struct FVector& Torque, const struct FName& BoneName, bool bAccelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddRadialImpulse(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bVelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddRadialForce(const struct FVector& Origin, float Radius, float Strength, TEnumAsByte<ERadialImpulseFalloff> Falloff, bool bAccelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddImpulseAtLocation(const struct FVector& Impulse, const struct FVector& Location, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddForceAtLocationLocal(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddForceAtLocation(const struct FVector& Force, const struct FVector& Location, const struct FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddForce(const struct FVector& Force, const struct FName& BoneName, bool bAccelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddAngularImpulseInRadians(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddAngularImpulseInDegrees(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);
	UFUNCTION(BlueprintCallable, Category = "PrimitiveComponent")
		void AddAngularImpulse(const struct FVector& Impulse, const struct FName& BoneName, bool bVelChange);

};