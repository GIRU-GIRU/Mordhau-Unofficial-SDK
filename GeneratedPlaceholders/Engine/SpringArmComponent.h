#pragma once

#include "CoreMinimal.h"
#include "SpringArmComponent.generated.h"

UCLASS()
class USpringArmComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector TargetOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ProbeSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECollisionChannel> ProbeChannel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDoCollisionTest : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsePawnControlRotation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritPitch : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritYaw : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInheritRoll : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableCameraLag : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableCameraRotationLag : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseCameraLagSubstepping : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawDebugLagMarkers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraLagSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraRotationLagSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraLagMaxTimeStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraLagMaxDistance;

	UFUNCTION(BlueprintCallable, Category = "SpringArmComponent")
	bool IsCollisionFixApplied();
	UFUNCTION(BlueprintCallable, Category = "SpringArmComponent")
		struct FVector GetUnfixedCameraPosition();
	UFUNCTION(BlueprintCallable, Category = "SpringArmComponent")
		struct FRotator GetTargetRotation();

};