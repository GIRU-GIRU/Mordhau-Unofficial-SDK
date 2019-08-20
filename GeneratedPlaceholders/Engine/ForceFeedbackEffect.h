#pragma once

#include "CoreMinimal.h"
#include "ForceFeedbackEffect.generated.h"

UCLASS()
class UForceFeedbackEffect : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FForceFeedbackChannelDetails> ChannelDetails;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Duration;


};