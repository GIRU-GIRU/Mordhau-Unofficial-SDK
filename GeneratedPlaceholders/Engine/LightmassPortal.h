#pragma once

#include "CoreMinimal.h"
#include "LightmassPortal.generated.h"

UCLASS()
class ALightmassPortal : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULightmassPortalComponent* PortalComponent;


};