#pragma once

#include "CoreMinimal.h"
#include "AnimNotify_PlayMontageNotify.generated.h"

UCLASS()
class UAnimNotify_PlayMontageNotify : public UAnimNotify
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName NotifyName;


};