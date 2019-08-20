#pragma once

#include "CoreMinimal.h"
#include "DatasmithAreaLightActor.generated.h"

UCLASS()
class ADatasmithAreaLightActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDatasmithAreaLightActorShape LightShape;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D Dimensions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor Color;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Intensity;


};