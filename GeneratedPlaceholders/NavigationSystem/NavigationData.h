#pragma once

#include "CoreMinimal.h"
#include "NavigationData.generated.h"

UCLASS()
class ANavigationData : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* RenderingComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavDataConfig NavDataConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableDrawing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceRebuildOnLoad : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanBeMainNavData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanSpawnOnRebuild : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRebuildAtRuntime : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ERuntimeGenerationType RuntimeGeneration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ObservedPathsTickInterval;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t DataVersion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSupportedAreaData> SupportedAreas;


};