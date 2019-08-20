#pragma once

#include "CoreMinimal.h"
#include "RejoinCheck.generated.h"

UCLASS()
class URejoinCheck : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ERejoinStatus LastKnownStatus;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRejoinAfterCheck;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAttemptingRejoin;


};