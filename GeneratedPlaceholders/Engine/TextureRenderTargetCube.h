#pragma once

#include "CoreMinimal.h"
#include "TextureRenderTargetCube.generated.h"

UCLASS()
class UTextureRenderTargetCube : public UTextureRenderTarget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ClearColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPixelFormat> OverrideFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHDR : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceLinearGamma : 1;


};