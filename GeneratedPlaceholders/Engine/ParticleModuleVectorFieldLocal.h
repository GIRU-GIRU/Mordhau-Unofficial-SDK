#pragma once

#include "CoreMinimal.h"
#include "ParticleModuleVectorFieldLocal.generated.h"

UCLASS()
class UParticleModuleVectorFieldLocal : public UParticleModuleVectorFieldBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UVectorField* VectorField;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeTranslation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRotator RelativeRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector RelativeScale3D;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Intensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Tightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreComponentTransform : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTileX : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTileY : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTileZ : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFixDT : 1;


};