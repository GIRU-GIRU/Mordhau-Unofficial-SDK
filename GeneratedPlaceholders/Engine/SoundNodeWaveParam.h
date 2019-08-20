#pragma once

#include "CoreMinimal.h"
#include "SoundNodeWaveParam.generated.h"

UCLASS()
class USoundNodeWaveParam : public USoundNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName WaveParameterName;


};