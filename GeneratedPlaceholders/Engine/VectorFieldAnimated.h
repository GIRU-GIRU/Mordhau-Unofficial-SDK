#pragma once

#include "CoreMinimal.h"
#include "VectorFieldAnimated.generated.h"

UCLASS()
class UVectorFieldAnimated : public UVectorField
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Texture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVectorFieldConstructionOp> ConstructionOp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int VolumeSizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int VolumeSizeY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int VolumeSizeZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubImagesX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubImagesY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FrameCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FramesPerSecond;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLoop : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UVectorFieldStatic* NoiseField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoiseScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NoiseMax;


};