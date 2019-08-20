#pragma once

#include "CoreMinimal.h"
#include "FoliageInstancedStaticMeshComponent.generated.h"

UCLASS()
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInstanceTakePointDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnInstanceTakeRadialDamage;


};