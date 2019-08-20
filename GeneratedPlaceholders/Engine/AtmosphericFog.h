#pragma once

#include "CoreMinimal.h"
#include "AtmosphericFog.generated.h"

UCLASS()
class AAtmosphericFog : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAtmosphericFogComponent* AtmosphericFogComponent;


};