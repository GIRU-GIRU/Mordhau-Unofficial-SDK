#pragma once

#include "CoreMinimal.h"
#include "PhysicsCollisionHandler.generated.h"

UCLASS()
class UPhysicsCollisionHandler : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ImpactThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ImpactReFireDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundBase* DefaultImpactSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LastImpactSoundTime;


};