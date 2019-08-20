#pragma once

#include "CoreMinimal.h"
#include "PhysicsThruster.generated.h"

UCLASS()
class APhysicsThruster : public ARigidBodyBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicsThrusterComponent* ThrusterComponent;


};