#pragma once

#include "CoreMinimal.h"
#include "ParticleSystemActor.generated.h"

UCLASS()
class AParticleSystemActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystem* Template;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent* ParticleSystemComponent;

	UFUNCTION(BlueprintCallable, Category = "ParticleSystemActor")
	void SparseTick();

};