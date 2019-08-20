#pragma once

#include "CoreMinimal.h"
#include "BoxReflectionCaptureComponent.generated.h"

UCLASS()
class UBoxReflectionCaptureComponent : public UReflectionCaptureComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PreviewInfluenceBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBoxComponent* PreviewCaptureBox;


};