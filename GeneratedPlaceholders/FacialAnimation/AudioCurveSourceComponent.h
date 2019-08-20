#pragma once

#include "CoreMinimal.h"
#include "AudioCurveSourceComponent.generated.h"

UCLASS()
class UAudioCurveSourceComponent : public UAudioComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName CurveSourceBindingName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CurveSyncOffset;


};