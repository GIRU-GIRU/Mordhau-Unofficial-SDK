#pragma once

#include "CoreMinimal.h"
#include "SplineMeshActor.generated.h"

UCLASS()
class ASplineMeshActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USplineMeshComponent* SplineMeshComponent;


};