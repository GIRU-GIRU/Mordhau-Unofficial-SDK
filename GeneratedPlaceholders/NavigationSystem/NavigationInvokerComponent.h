#pragma once

#include "CoreMinimal.h"
#include "NavigationInvokerComponent.generated.h"

UCLASS()
class UNavigationInvokerComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TileGenerationRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TileRemovalRadius;


};