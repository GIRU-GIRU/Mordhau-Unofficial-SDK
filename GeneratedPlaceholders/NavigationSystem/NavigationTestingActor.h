#pragma once

#include "CoreMinimal.h"
#include "NavigationTestingActor.generated.h"

UCLASS()
class ANavigationTestingActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCapsuleComponent* CapsuleComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNavigationInvokerComponent* InvokerComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bActAsNavigationInvoker : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAgentProperties NavAgentProps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector QueryingExtent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ANavigationData* MyNavData;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ProjectedLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bProjectedLocationValid : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSearchStart : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseHierarchicalPathfinding : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGatherDetailedInfo : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDrawDistanceToWall : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowNodePool : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowBestPath : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowDiffWithPreviousStep : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldBeVisibleInGame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ENavCostDisplay> CostDisplayMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D TextCanvasOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPathExist : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPathIsPartial : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPathSearchOutOfNodes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathfindingTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PathCost;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PathfindingSteps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ANavigationTestingActor* OtherActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* FilterClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ShowStepIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OffsetFromCornersDistance;


};