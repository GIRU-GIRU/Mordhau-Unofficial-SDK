#pragma once

#include "CoreMinimal.h"
#include "RecastNavMesh.generated.h"

UCLASS()
class ARecastNavMesh : public ANavigationData
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawTriangleEdges : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawPolyEdges : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawFilledPolys : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawNavMeshEdges : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawTileBounds : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawPathCollidingGeometry : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawTileLabels : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawPolygonLabels : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawDefaultPolygonCost : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawLabelsOnPathNodes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawNavLinks : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawFailedNavLinks : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawClusters : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawOctree : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawOctreeDetails : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDistinctlyDrawTilesBeingBuilt : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawNavMesh : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DrawOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFixedTilePoolSize : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TilePoolSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TileSizeUU;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CellSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CellHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AgentRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AgentHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AgentMaxHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AgentMaxSlope;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float AgentMaxStepHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinRegionArea;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MergeRegionSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxSimplificationError;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSimultaneousTileGenerationJobsCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TileNumberHardLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PolyRefTileBits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PolyRefNavPolyBits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PolyRefSaltBits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultDrawDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultMaxSearchNodes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DefaultMaxHierarchicalSearchNodes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERecastPartitioning> RegionPartitioning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERecastPartitioning> LayerPartitioning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int RegionChunkSplits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LayerChunkSplits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSortNavigationAreasByCost : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPerformVoxelFiltering : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMarkLowHeightAreas : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFilterLowSpanSequences : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFilterLowSpanFromTileCache : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDoFullyAsyncNavDataGathering : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseBetterOffsetsFromCorners : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStoreEmptyTileLayers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseVirtualFilters : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowNavLinkAsPathEnd : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseVoxelCache : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TileSetUpdateInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeuristicScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VerticalDeviationFromGroundCompensation;


};