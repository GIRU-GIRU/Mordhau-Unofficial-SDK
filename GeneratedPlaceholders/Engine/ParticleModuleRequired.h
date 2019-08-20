#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleRequired.generated.h"

UCLASS()
class UParticleModuleRequired : public UParticleModule
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* Material;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector EmitterOrigin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator EmitterRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleScreenAlignment> ScreenAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinFacingCameraBlendDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxFacingCameraBlendDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseLocalSpace : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bKillOnDeactivate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bKillOnCompleted : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleSortMode> SortMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseLegacyEmitterTime : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRemoveHMDRoll : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EmitterDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EmitterDurationLow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEmitterDurationUseRange : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDurationRecalcEachLoop : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EmitterLoops;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat SpawnRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FParticleBurst> BurstList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EmitterDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EmitterDelayLow;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEmitterDelayUseRange : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDelayFirstLoopOnly : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EParticleSubUVInterpMethod> InterpolationMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubImages_Horizontal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubImages_Vertical;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bScaleUV : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomImageTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RandomImageChanges;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideSystemMacroUV : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector MacroUVPosition;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MacroUVRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseMaxDrawCount : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxDrawCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EParticleUVFlipMode UVFlippingMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* CutoutTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EOpacitySourceMode> OpacitySourceMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AlphaThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEmitterNormalsMode> EmitterNormalsMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector NormalsSphereCenter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector NormalsCylinderDirection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOrbitModuleAffectsVelocityAlignment : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> NamedMaterialOverrides;


};