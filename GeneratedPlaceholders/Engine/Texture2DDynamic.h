#pragma once

#include "CoreMinimal.h"
#include "Texture2DDynamic.generated.h"

UCLASS()
class UTexture2DDynamic : public UTexture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPixelFormat> Format;


};