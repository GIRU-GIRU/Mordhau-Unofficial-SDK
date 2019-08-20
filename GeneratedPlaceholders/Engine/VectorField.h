#pragma once

#include "CoreMinimal.h"
#include "VectorField.generated.h"

UCLASS()
class UVectorField : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox Bounds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Intensity;


};