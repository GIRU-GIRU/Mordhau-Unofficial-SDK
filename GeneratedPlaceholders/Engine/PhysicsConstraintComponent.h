#pragma once

#include "CoreMinimal.h"
#include "PhysicsConstraintComponent.generated.h"

UCLASS()
class UPhysicsConstraintComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FConstrainComponentPropName ComponentName1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ConstraintActor2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FConstrainComponentPropName ComponentName2;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsConstraintTemplate* ConstraintSetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnConstraintBroken;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FConstraintInstance ConstraintInstance;

	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
	void SetOrientationDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetOrientationDriveSLERP(bool bEnableSLERP);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearZLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearYLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearXLimit(TEnumAsByte<ELinearConstraintMotion> ConstraintType, float LimitSize);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearVelocityTarget(const struct FVector& InVelTarget);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearVelocityDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearPositionTarget(const struct FVector& InPosTarget);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearPositionDrive(bool bEnableDriveX, bool bEnableDriveY, bool bEnableDriveZ);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetLinearBreakable(bool bLinearBreakable, float LinearBreakThreshold);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetDisableCollision(bool bDisableCollision);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetConstraintReferencePosition(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& RefPosition);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetConstraintReferenceOrientation(TEnumAsByte<EConstraintFrame> Frame, const struct FVector& PriAxis, const struct FVector& SecAxis);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetConstraintReferenceFrame(TEnumAsByte<EConstraintFrame> Frame, const struct FTransform& RefFrame);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetConstrainedComponents(class UPrimitiveComponent* Component1, const struct FName& BoneName1, class UPrimitiveComponent* Component2, const struct FName& BoneName2);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularVelocityTarget(const struct FVector& InVelTarget);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularVelocityDriveTwistAndSwing(bool bEnableTwistDrive, bool bEnableSwingDrive);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularVelocityDriveSLERP(bool bEnableSLERP);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularVelocityDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularTwistLimit(TEnumAsByte<EAngularConstraintMotion> ConstraintType, float TwistLimitAngle);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularSwing2Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing2LimitAngle);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularSwing1Limit(TEnumAsByte<EAngularConstraintMotion> MotionType, float Swing1LimitAngle);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularOrientationTarget(const struct FRotator& InPosTarget);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularOrientationDrive(bool bEnableSwingDrive, bool bEnableTwistDrive);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularDriveParams(float PositionStrength, float VelocityStrength, float InForceLimit);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularDriveMode(TEnumAsByte<EAngularDriveMode> DriveMode);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void SetAngularBreakable(bool bAngularBreakable, float AngularBreakThreshold);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		bool IsBroken();
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		float GetCurrentTwist();
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		float GetCurrentSwing2();
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		float GetCurrentSwing1();
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void GetConstraintForce(struct FVector* OutLinearForce, struct FVector* OutAngularForce);
	UFUNCTION(BlueprintCallable, Category = "PhysicsConstraintComponent")
		void BreakConstraint();

};