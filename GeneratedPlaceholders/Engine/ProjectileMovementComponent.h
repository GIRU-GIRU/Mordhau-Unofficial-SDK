#pragma once

#include "CoreMinimal.h"
#include "ProjectileMovementComponent.generated.h"

UCLASS()
class UProjectileMovementComponent : public UMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRotationFollowsVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBounce : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInitialVelocityInLocalSpace : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceSubStepping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsHomingProjectile : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBounceAngleAffectsFriction : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsSliding : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PreviousHitTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousHitNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProjectileGravityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Buoyancy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Bounciness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Friction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BounceVelocityStopSimulatingThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnProjectileBounce;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnProjectileStop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HomingAccelerationMagnitude;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class USceneComponent> HomingTargetComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSimulationTimeStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSimulationIterations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BounceAdditionalIterations;

	UFUNCTION(BlueprintCallable, Category = "ProjectileMovementComponent")
	void StopSimulating(const struct FHitResult& HitResult);
	UFUNCTION(BlueprintCallable, Category = "ProjectileMovementComponent")
		void SetVelocityInLocalSpace(const struct FVector& NewVelocity);
	UFUNCTION(BlueprintCallable, Category = "ProjectileMovementComponent")
		void OnProjectileStopDelegate__DelegateSignature(const struct FHitResult& ImpactResult);
	UFUNCTION(BlueprintCallable, Category = "ProjectileMovementComponent")
		void OnProjectileBounceDelegate__DelegateSignature(const struct FHitResult& ImpactResult, const struct FVector& ImpactVelocity);
	UFUNCTION(BlueprintCallable, Category = "ProjectileMovementComponent")
		struct FVector LimitVelocity(const struct FVector& NewVelocity);

};