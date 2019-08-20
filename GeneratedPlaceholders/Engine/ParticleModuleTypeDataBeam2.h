#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleTypeDataBeam2.generated.h"

UCLASS()
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBeam2Method> BeamMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TextureTile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TextureTileDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Sheets;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxBeamCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Speed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int InterpolationPoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysOn : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int UpVectorStepSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName BranchParentName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat Distance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBeamTaperMethod> TaperMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat TaperFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRawDistributionFloat TaperScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char RenderGeometry : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char RenderDirectLine : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char RenderLines : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char RenderTessellation : 1;


};