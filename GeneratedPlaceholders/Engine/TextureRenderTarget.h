#pragma once

#include "CoreMinimal.h"
#include "TextureRenderTarget.generated.h"

UCLASS()
class UTextureRenderTarget : public UTexture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TargetGamma;


};