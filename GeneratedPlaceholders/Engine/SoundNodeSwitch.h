#pragma once

#include "CoreMinimal.h"
#include "SoundNodeSwitch.generated.h"

UCLASS()
class USoundNodeSwitch : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName IntParameterName;


};