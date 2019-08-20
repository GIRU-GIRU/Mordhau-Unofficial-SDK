#pragma once

#include "CoreMinimal.h"
#include "FoliageType.generated.h"

UCLASS()
class UFoliageType : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid UpdateGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Density;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DensityAdjustmentFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Radius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFoliageScaling Scaling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatInterval ScaleX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatInterval ScaleY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatInterval ScaleZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EFoliageVertexColorMask> VertexColorMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VertexColorMaskThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char VertexColorMaskInvert : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatInterval ZOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AlignToNormal : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AlignMaxAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char RandomYaw : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RandomPitchAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatInterval GroundSlopeAngle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatInterval Height;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> LandscapeLayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName LandscapeLayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CollisionWithWorld : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector CollisionScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinimumLayerWeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBoxSphereBounds MeshBounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LowBoundOriginRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EComponentMobility> Mobility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FInt32Interval CullDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableStaticLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char CastShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectDynamicIndirectLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAffectDistanceFieldLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastDynamicShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastStaticShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastShadowAsTwoSided : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReceivesDecals : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverrideLightMapRes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int OverriddenLightMapRes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ELightmapType LightmapType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseAsOccluder : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBodyInstance BodyInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHasCustomNavigableGeometry> CustomNavigableGeometry;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightingChannels LightingChannels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderCustomDepth : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CustomDepthStencilValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CollisionRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ShadeRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumSteps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InitialSeedDensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AverageSpreadDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SpreadVariance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SeedsPerStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DistributionSeed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxInitialSeedOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bCanGrowInShade;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bSpawnsInShade;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxInitialAge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OverlapPriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatInterval ProceduralScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FRuntimeFloatCurve ScaleCurve;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ChangeCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyDensity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyRadius : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyAlignToNormal : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyRandomYaw : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyScaling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyScaleX : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyScaleY : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyScaleZ : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyRandomPitchAngle : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyGroundSlope : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyHeight : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyLandscapeLayers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyZOffset : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyCollisionWithWorld : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReapplyVertexColorMask : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableDensityScaling : 1;


};