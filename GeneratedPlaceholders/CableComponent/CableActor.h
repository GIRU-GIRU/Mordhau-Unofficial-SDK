#pragma once

#include "CoreMinimal.h"
#include "CableActor.generated.h"

UCLASS()
class ACableActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCableComponent* CableComponent;


};