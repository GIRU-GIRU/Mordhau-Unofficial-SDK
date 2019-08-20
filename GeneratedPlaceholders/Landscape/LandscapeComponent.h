#pragma once

#include "CoreMinimal.h"
#include "LandscapeComponent.generated.h"

UCLASS()
class ULandscapeComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SectionBaseX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SectionBaseY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ComponentSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubsectionSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumSubsections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* OverrideMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* OverrideHoleMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInstanceConstant*> MaterialInstances;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialInstanceDynamic*> MaterialInstancesDynamic;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture2D*> WeightmapTextures;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* XYOffsetmapTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector4 WeightmapScaleBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WeightmapSubsectionOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector4 HeightmapScaleBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* HeightmapTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox CachedLocalBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid MapBuildDataId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGuid> IrrelevantLights;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CollisionMipLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SimpleCollisionMipLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NegativeZBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PositiveZBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StaticLightingResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ForcedLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LODBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid StateId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid BakedTextureMaterialGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* GIBakedBaseColorTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MobileBlendableLayerMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* MobileMaterialInterface;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture2D*> MobileWeightmapTextures;

	UFUNCTION(BlueprintCallable, Category = "LandscapeComponent")
	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int InIndex);

};