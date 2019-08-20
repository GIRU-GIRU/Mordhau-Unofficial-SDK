#pragma once

#include "CoreMinimal.h"
#include "LandscapeGrassType.generated.h"

UCLASS()
class ULandscapeGrassType : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGrassVariety> GrassVarieties;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableDensityScaling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* GrassMesh;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GrassDensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PlacementJitter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StartCullDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EndCullDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool RandomRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool AlignToSurface;


};