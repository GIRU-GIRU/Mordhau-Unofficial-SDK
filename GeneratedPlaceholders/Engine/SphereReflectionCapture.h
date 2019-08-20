#pragma once

#include "CoreMinimal.h"
#include "SphereReflectionCapture.generated.h"

UCLASS()
class ASphereReflectionCapture : public AReflectionCapture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDrawSphereComponent* DrawCaptureRadius;


};