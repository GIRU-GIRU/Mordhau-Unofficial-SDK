#pragma once

#include "CoreMinimal.h"
#include "ImageCaptureSettings.generated.h"

UCLASS()
class UImageCaptureSettings : public UFrameGrabberProtocolSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CompressionQuality;


};