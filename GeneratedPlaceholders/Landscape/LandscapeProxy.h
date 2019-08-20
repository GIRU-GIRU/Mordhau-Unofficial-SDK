#pragma once

#include "CoreMinimal.h"
#include "LandscapeProxy.generated.h"

UCLASS()
class ALandscapeProxy : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULandscapeSplinesComponent* SplineComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid LandscapeGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FIntPoint LandscapeSectionOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxLODLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDistanceFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ELandscapeLODFalloff> LODFalloff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ComponentScreenSizeToUseSubSections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LOD0DistributionSetting;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LODDistributionSetting;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TessellationComponentScreenSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool UseTessellationComponentScreenSizeFalloff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TessellationComponentScreenSizeFalloff;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OccluderGeometryLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StaticLightingLOD;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterial* DefaultPhysMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StreamingDistanceMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LandscapeMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* LandscapeHoleMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NegativeZBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PositiveZBoundsExtension;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULandscapeComponent*> LandscapeComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class ULandscapeHeightfieldCollisionComponent*> CollisionComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UHierarchicalInstancedStaticMeshComponent*> FoliageComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasLandscapeGrass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StaticLightingResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastStaticShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastShadowAsTwoSided : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastFarShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectDistanceFieldLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightingChannels LightingChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseMaterialPositionOffsetInStaticLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderCustomDepth : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CustomDepthStencilValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LDMaxDrawDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightmassPrimitiveSettings LightmassSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CollisionMipLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SimpleCollisionMipLevel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CollisionThickness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBodyInstance BodyInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateOverlapEvents : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBakeMaterialPositionOffsetIntoCollision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ComponentSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SubsectionSizeQuads;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumSubsections;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedForNavigation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseDynamicMaterialInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ENavDataGatheringMode NavigationGeometryGatheringMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseLandscapeForCullingInvisibleHLODVertices;

	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
	void SetLandscapeMaterialVectorParameterValue(const struct FName& ParameterName, const struct FLinearColor& Value);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void SetLandscapeMaterialTextureParameterValue(const struct FName& ParameterName, class UTexture* Value);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void SetLandscapeMaterialScalarParameterValue(const struct FName& ParameterName, float Value);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void ChangeLODDistanceFactor(float InLODDistanceFactor);
	UFUNCTION(BlueprintCallable, Category = "LandscapeProxy")
		void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);

};