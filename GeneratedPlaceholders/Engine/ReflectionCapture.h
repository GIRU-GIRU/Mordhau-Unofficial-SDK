#pragma once

#include "CoreMinimal.h"
#include "ReflectionCapture.generated.h"

UCLASS()
class AReflectionCapture : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UReflectionCaptureComponent* CaptureComponent;


};