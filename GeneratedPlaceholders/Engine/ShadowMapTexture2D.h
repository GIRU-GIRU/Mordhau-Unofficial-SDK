#pragma once

#include "CoreMinimal.h"
#include "ShadowMapTexture2D.generated.h"

UCLASS()
class UShadowMapTexture2D : public UTexture2D
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EShadowMapFlags> ShadowmapFlags;


};