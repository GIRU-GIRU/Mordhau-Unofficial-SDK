#pragma once

#include "CoreMinimal.h"
#include "PhysicsHandleComponent.generated.h"

UCLASS()
class UPhysicsHandleComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* GrabbedComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSoftAngularConstraint : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSoftLinearConstraint : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInterpolateTarget : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LinearDamping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LinearStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngularDamping;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AngularStiffness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InterpolationSpeed;

	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
	void SetTargetRotation(const struct FRotator& NewRotation);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void SetTargetLocationAndRotation(const struct FVector& NewLocation, const struct FRotator& NewRotation);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void SetTargetLocation(const struct FVector& NewLocation);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void SetLinearStiffness(float NewLinearStiffness);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void SetLinearDamping(float NewLinearDamping);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void SetInterpolationSpeed(float NewInterpolationSpeed);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void SetAngularStiffness(float NewAngularStiffness);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void SetAngularDamping(float NewAngularDamping);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void ReleaseComponent();
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void GrabComponentAtLocationWithRotation(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& Location, const struct FRotator& Rotation);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void GrabComponentAtLocation(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void GrabComponent(class UPrimitiveComponent* Component, const struct FName& InBoneName, const struct FVector& GrabLocation, bool bConstrainRotation);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		void GetTargetLocationAndRotation(struct FVector* TargetLocation, struct FRotator* TargetRotation);
	UFUNCTION(BlueprintCallable, Category = "PhysicsHandleComponent")
		class UPrimitiveComponent* GetGrabbedComponent();

};