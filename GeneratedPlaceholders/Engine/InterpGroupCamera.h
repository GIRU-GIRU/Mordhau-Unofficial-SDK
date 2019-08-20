#pragma once

#include "CoreMinimal.h"
#include "InterpGroupCamera.generated.h"

UCLASS()
class UInterpGroupCamera : public UInterpGroup
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCameraAnim* CameraAnimInst;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CompressTolerance;


};