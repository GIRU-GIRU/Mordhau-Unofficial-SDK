#pragma once

#include "CoreMinimal.h"
#include "FieldSpawnComponent.generated.h"

UCLASS()
class UFieldSpawnComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSnapLocationToGround;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSnapLocationToGroundDestroyIfNoGround;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSnapRotationToGroundNormal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAllowedRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SnapGroundTraceOffsetZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SnapGroundRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDistanceSnapGround;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldCheckLineOfSight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LineOfSightRadiusCheck;


};