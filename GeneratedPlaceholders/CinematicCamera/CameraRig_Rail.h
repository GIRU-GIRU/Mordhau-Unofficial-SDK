#pragma once

#include "CoreMinimal.h"
#include "CameraRig_Rail.generated.h"

UCLASS()
class ACameraRig_Rail : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurrentPositionOnRail;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLockOrientationToRail;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* TransformComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USplineComponent* RailSplineComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* RailCameraMount;


};