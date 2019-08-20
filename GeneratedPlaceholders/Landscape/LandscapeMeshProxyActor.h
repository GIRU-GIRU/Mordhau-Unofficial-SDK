#pragma once

#include "CoreMinimal.h"
#include "LandscapeMeshProxyActor.generated.h"

UCLASS()
class ALandscapeMeshProxyActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent;


};