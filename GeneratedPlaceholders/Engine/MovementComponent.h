#pragma once

#include "CoreMinimal.h"
#include "MovementComponent.generated.h"

UCLASS()
class UMovementComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* UpdatedComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* UpdatedPrimitive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector Velocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bConstrainToPlane : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSnapToPlaneAtStart : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PlaneConstraintNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PlaneConstraintOrigin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUpdateOnlyIfRendered : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoUpdateTickRegistration : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTickBeforeOwner : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoRegisterUpdatedComponent : 1;

	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
	void StopMovementImmediately();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void SnapUpdatedComponentToPlane();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void SetUpdatedComponent(class USceneComponent* NewUpdatedComponent);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void SetPlaneConstraintOrigin(const struct FVector& PlaneOrigin);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void SetPlaneConstraintNormal(const struct FVector& PlaneNormal);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void SetPlaneConstraintFromVectors(const struct FVector& Forward, const struct FVector& Up);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void SetPlaneConstraintEnabled(bool bEnabled);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void SetPlaneConstraintAxisSetting(EPlaneConstraintAxisSetting NewAxisSetting);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		void PhysicsVolumeChanged(class APhysicsVolume* NewVolume);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		bool K2_MoveUpdatedComponent(const struct FVector& Delta, const struct FRotator& NewRotation, bool bSweep, bool bTeleport, struct FHitResult* OutHit);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		float K2_GetModifiedMaxSpeed();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		float K2_GetMaxSpeedModifier();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		bool IsExceedingMaxSpeed(float MaxSpeed);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		struct FVector GetPlaneConstraintOrigin();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		struct FVector GetPlaneConstraintNormal();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		EPlaneConstraintAxisSetting GetPlaneConstraintAxisSetting();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		class APhysicsVolume* GetPhysicsVolume();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		float GetMaxSpeed();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		float GetGravityZ();
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		struct FVector ConstrainNormalToPlane(const struct FVector& Normal);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		struct FVector ConstrainLocationToPlane(const struct FVector& Location);
	UFUNCTION(BlueprintCallable, Category = "MovementComponent")
		struct FVector ConstrainDirectionToPlane(const struct FVector& Direction);

};