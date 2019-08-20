#pragma once

#include "CoreMinimal.h"
#include "MaterialInstanceActor.generated.h"

UCLASS()
class AMaterialInstanceActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> TargetActors;


};