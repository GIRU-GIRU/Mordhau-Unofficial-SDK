#pragma once

#include "CoreMinimal.h"
#include "UMGSequencePlayer.generated.h"

UCLASS()
class UUMGSequencePlayer : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidgetAnimation* Animation;


};