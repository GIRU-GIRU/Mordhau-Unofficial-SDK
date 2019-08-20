#pragma once

#include "CoreMinimal.h"
#include "MaterialInstance.generated.h"

UCLASS()
class UMaterialInstance : public UMaterialInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterial* PhysMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* Parent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasStaticPermutationResource : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideSubsurfaceProfile : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FScalarParameterValue> ScalarParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVectorParameterValue> VectorParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FTextureParameterValue> TextureParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFontParameterValue> FontParameterValues;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOverrideBaseProperties;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialInstanceBasePropertyOverrides BasePropertyOverrides;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture*> PermutationTextureReferences;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FStaticParameterSet StaticParameters;


};