#pragma once

#include "CoreMinimal.h"
#include "PlaneReflectionCaptureComponent.generated.h"

UCLASS()
class UPlaneReflectionCaptureComponent : public UReflectionCaptureComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UDrawSphereComponent* PreviewInfluenceRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PreviewCaptureBox;


};