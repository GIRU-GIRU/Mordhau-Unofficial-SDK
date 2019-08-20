#pragma once

#include "CoreMinimal.h"
#include "LightmassPrimitiveSettingsObject.generated.h"

UCLASS()
class ULightmassPrimitiveSettingsObject : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLightmassPrimitiveSettings LightmassSettings;


};