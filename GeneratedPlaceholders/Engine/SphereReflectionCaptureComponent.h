#pragma once

#include "CoreMinimal.h"
#include "SphereReflectionCaptureComponent.generated.h"

UCLASS()
class USphereReflectionCaptureComponent : public UReflectionCaptureComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDrawSphereComponent* PreviewInfluenceRadius;


};