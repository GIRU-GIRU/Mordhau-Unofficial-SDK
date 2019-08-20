#pragma once

#include "CoreMinimal.h"
#include "DatasmithSceneComponentTemplate.generated.h"

UCLASS()
class UDatasmithSceneComponentTemplate : public UDatasmithObjectTemplate
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform RelativeTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EComponentMobility> Mobility;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USceneComponent* AttachParent;


};