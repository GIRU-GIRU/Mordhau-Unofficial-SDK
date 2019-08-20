#pragma once

#include "CoreMinimal.h"
#include "VectorFieldStatic.generated.h"

UCLASS()
class UVectorFieldStatic : public UVectorField
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeZ;


};