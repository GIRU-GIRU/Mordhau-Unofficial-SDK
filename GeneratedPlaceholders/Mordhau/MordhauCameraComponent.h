#pragma once

#include "CoreMinimal.h"
#include "MordhauCameraComponent.generated.h"

UCLASS()
class UMordhauCameraComponent : public UCameraComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CinematicCameraBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumCinematicCameraBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FirstPersonCinematicCameraOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ThirdPersonCinematicCameraOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator CinematicCameraRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator ThirdPersonRotationOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ThirdPersonCameraOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ThirdPersonAimingCameraOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AimingCameraActivateChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AimingCameraDisableChangeSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AimingBlendWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThirdPersonHipsSmoothSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ThirdPersonHipsSmoothLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThirdPersonTeleportThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeadCameraLocationSmoothSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeadCameraLocationSmoothMaxDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DeadCameraRotationSmoothSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SmoothedHeadLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator SmoothedHeadRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform PreviousHeadTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnOnFirstPersonModelDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TurnOnThirdPersonModelDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* ThirdToFirstBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* FirstToThirdBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* MapToFirstBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* MapToThirdBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* MapToFirstRotationBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* MapToThirdRotationBlendCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CameraStyleBlendingFrom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CameraStyleBlendingTo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPOV LastCameraStyleChangeCameraPOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPOV LastVehicleCameraPOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPOV LastNonVehicleCameraPOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPOV LastCameraPOV;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsBlendingCameraStyle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraStyleChangeBlendDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MapCameraStyleChangeBlendDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector SmoothedHipsOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousHipsLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* CameraLocationScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* CameraZoomScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector PreviousCharacterMeshLocation;

	UFUNCTION(BlueprintCallable, Category = "MordhauCameraComponent")
	void UpdateCamera();
	UFUNCTION(BlueprintCallable, Category = "MordhauCameraComponent")
		struct FPOV ComputeCameraPOV();

};