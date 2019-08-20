#pragma once

#include "CoreMinimal.h"
#include "GoreActor.generated.h"

UCLASS()
class AGoreActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent* StaticMeshComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ParticleSystemComponent;


};