#pragma once

#include "CoreMinimal.h"
#include "LandscapeMaterialInstanceConstant.generated.h"

UCLASS()
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsLayerThumbnail : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableTessellation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobile : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEditorToolUsage : 1;


};