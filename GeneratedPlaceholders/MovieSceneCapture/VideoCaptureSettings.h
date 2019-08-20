#pragma once

#include "CoreMinimal.h"
#include "VideoCaptureSettings.generated.h"

UCLASS()
class UVideoCaptureSettings : public UFrameGrabberProtocolSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseCompression;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CompressionQuality;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString VideoCodec;


};