#pragma once

#include "CoreMinimal.h"
#include "CameraRig_Crane.generated.h"

UCLASS()
class ACameraRig_Crane : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CranePitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CraneYaw;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CraneArmLength;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLockMountPitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLockMountYaw;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* TransformComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* CraneYawControl;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* CranePitchControl;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* CraneCameraMount;


};