#pragma once

#include "CoreMinimal.h"
#include "MordhauProjectile.generated.h"

UCLASS()
class AMordhauProjectile : public AMordhauActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* SpinComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDestroyWhenTerminated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWasAttachedOnClient;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText ProjectileName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LastProjectileLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHideProjectile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform CosmeticOffsetToBlendOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CosmeticOffsetBlendOutSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CosmeticOffsetBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform OriginalMeshRelativeTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQuat DefaultMeshRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FWoundInfo> WoundInfoArray;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EPhysicalSurface>> WillStickyOn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TEnumAsByte<EPhysicalSurface>> WillPassThroughOn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EPhysicalSurface>, class UParticleSystem*> SurfaceImpactParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TMap<TEnumAsByte<EPhysicalSurface>, struct FDecalInfo> SurfaceImpactDecals;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RotationSpin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathBlendDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RagdollLifeSpan;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AttackMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* FlightSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* ImpactSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* FleshImpactSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> CurrentFlightSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FActorSetAndArray CosmeticIgnoreActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FActorSetAndArray IgnoreActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FHitResult> HitResultCache;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator AccumulatedRotationSpin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FReplicatedProjectileInfo ReplicatedProjectileInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AActor> Creator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AController> OwningController;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class APawn> OwningPawn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFromLocalPlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauProjectile* AssociatedProjectile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DamageModifierHuntsmanPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> Damage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> HeadBonus;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float> LegBonus;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WoodDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StoneDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasReceivedInfo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FiredTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastProjectileSweepTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUsesLocalProjectileBlending;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsConfirmed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasTerminated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TerminatedTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasNetworkOrigin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasFired;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> RestockAmmoForEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GiveEquipmentOnPickup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAssignCustomizationOnPickup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FEquipmentCustomization CreatorEquipmentCustomization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsActiveBlendProjectile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasStartedTrail;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutomaticallyDetermineMeshLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ProjectileCollisionPrecedence;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWillIgnoreShooter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAutomaticallyDetermineSpinLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StickySurfacePitchBlend;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StickySurfaceYawBlend;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* TrailParticleTemplate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent> CurrentTrailParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName TrailStartSocket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName TrailEndSocket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TrailWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETrailWidthMode> TrailWidthMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsLocallyPredicted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AttackBounceForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ParryBounceForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProjectileBounceForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EnvironmentBounceForce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceAngularVelocityFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceMinAngularVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldFlinch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CullDistanceRagdoll;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* CollisionComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAdvProjectileMovementComponent* ProjectileMovement;

	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
	bool WillSticky(unsigned char Surface);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		bool WillPassThrough(unsigned char Surface);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		bool UsesProjectileBlending();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void UpdateProjectileState(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void TerminateProjectile();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void SweepProjectile();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void StopTrail();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void StartTrail();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void SpawnParticles(const struct FVector& Location, const struct FRotator& Rotation, class UParticleSystem* System);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void SpawnDecal(const struct FVector& Location, const struct FRotator& Rotation, const struct FDecalInfo& DecalInfo);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void SetCurrentTrailParticles(class UParticleSystemComponent* ParticleSystemComponent);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		bool RestockCharacter(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void ProcessProjectileHit(bool bIsBlocking, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void OnRep_ReplicatedProjectileInfo();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void OnProjectileHitCosmetic(class AActor* OtherActor, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void OnProjectileHit(const struct FVector& HitLocation, const struct FVector& HitNormal, float BounceForce, unsigned char Surface, bool bHasHitWorld, bool bHasStopped);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void OnProjectileFired();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void OnProjectileDamagedCharacter(class AAdvancedCharacter* Character, bool bWillKill, const struct FVector& WorldLocation, const struct FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void InitializeProjectile(class AController* InOwningController, bool bInIsLocallyPredicted, class AActor* InCreator);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		class AController* GetProjectileOwningController();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		class AActor* GetProjectileCreator();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		float GetPercentageOfMaxVelocityClamped();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		struct FTransform GetCurrentTransformWithOffsets();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		class UParticleSystemComponent* GetCurrentTrailParticles();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		struct FTransform GetBlendedTransform(float T);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void Fire();
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void CarryOverTrail(class AMordhauProjectile* NewProjectile);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		void BounceComponent(class USkeletalMeshComponent* ComponentToBounce, const struct FVector& NewVelocity, const struct FVector& NewAngularVelocity);
	UFUNCTION(BlueprintCallable, Category = "MordhauProjectile")
		bool AttachProjectile(const struct FHitResult& Hit);

};