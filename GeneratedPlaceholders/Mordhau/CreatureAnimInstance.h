#pragma once

#include "CoreMinimal.h"
#include "CreatureAnimInstance.generated.h"

UCLASS()
class UCreatureAnimInstance : public UAdvancedCharacterAnimInstance
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFootGroundingLimb> GroundingLimbs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bComputeGroundingRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FootstepEffectsMaxCameraDist;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FootstepLODDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D FootstepVolumeVelocityRangeIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D FootstepVolumeVelocityRangeOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D FootstepPitchVelocityRangeIn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D FootstepPitchVelocityRangeOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FootstepVolumeModifierSelf;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FootstepVolumeModifierAlly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FootstepSoundZOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector FootstepDecalSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInterface*> FootstepDecals;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*> FootstepParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LandOffsetBlendInTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LandOffsetBlendInSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LandOffsetBlendOutSpeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LandOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDoNotAddLandOffsetToGrounding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCurveFloat* LandOffsetFactorByAirTime;

	UFUNCTION(BlueprintCallable, Category = "CreatureAnimInstance")
	void OnFootstep(int Limb, int SurfaceType);
	UFUNCTION(BlueprintCallable, Category = "CreatureAnimInstance")
		void DoFootstep(int Limb);

};