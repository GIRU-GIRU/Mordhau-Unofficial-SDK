#pragma once

#include "CoreMinimal.h"
#include "NavMeshBoundsVolume.generated.h"

UCLASS()
class ANavMeshBoundsVolume : public AVolume
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FNavAgentSelector SupportedAgents;


};