#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleTypeDataMesh.generated.h"

UCLASS()
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* Mesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseStaticMeshLODs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODSizeScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DoCollisions : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMeshScreenAlignment> MeshAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideMaterial : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideDefaultMotionBlurSettings : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableMotionBlur : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Pitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Roll;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Yaw;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionVector RollPitchYawRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleAxisLock> AxisLockOption;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCameraFacing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMeshCameraFacingUpAxis> CameraFacingUpAxisOption;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMeshCameraFacingOptions> CameraFacingOption;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bApplyParticleRotationAsSpin : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFaceCameraDirectionRatherThanPosition : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCollisionsConsiderPartilceSize : 1;


};