#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleTypeDataRibbon.generated.h"

UCLASS()
class UParticleModuleTypeDataRibbon : public UParticleModuleTypeDataBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxTessellationBetweenParticles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SheetsPerTrail;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxTrailCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxParticleInTrailCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDeadTrailsOnDeactivate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDeadTrailsOnSourceLoss : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClipSourceSegement : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnablePreviousTangentRecalculation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTangentRecalculationEveryFrame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSpawnInitialParticle : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETrailsRenderAxisOption> RenderAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TangentSpawningScalar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderGeometry : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderSpawnPoints : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderTangents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderTessellation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TilingDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DistanceTessellationStepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableTangentDiffInterpScale : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TangentTessellationScalar;


};