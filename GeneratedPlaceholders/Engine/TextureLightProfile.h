#pragma once

#include "CoreMinimal.h"
#include "TextureLightProfile.generated.h"

UCLASS()
class UTextureLightProfile : public UTexture2D
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Brightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TextureMultiplier;


};