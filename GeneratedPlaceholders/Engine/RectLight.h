#pragma once

#include "CoreMinimal.h"
#include "RectLight.generated.h"

UCLASS()
class ARectLight : public ALight
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class URectLightComponent* RectLightComponent;


};