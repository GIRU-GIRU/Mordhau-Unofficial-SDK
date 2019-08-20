#pragma once

#include "CoreMinimal.h"
#include "LODStaticMeshActor.generated.h"

UCLASS()
class ALODStaticMeshActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULODStaticMeshComponent* StaticMeshComponent;


};