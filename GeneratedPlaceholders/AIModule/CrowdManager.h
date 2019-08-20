#pragma once

#include "CoreMinimal.h"
#include "CrowdManager.generated.h"

UCLASS()
class UCrowdManager : public UCrowdManagerBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ANavigationData* MyNavData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxAgents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAgentRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxAvoidedAgents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxAvoidedWalls;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NavmeshCheckInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathOptimizationInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SeparationDirClamp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathOffsetRadiusMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData00 : 4;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bResolveCollisions : 1;


};