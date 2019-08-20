#pragma once

#include "CoreMinimal.h"
#include "Party.generated.h"

UCLASS()
class UParty : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int DefaultMaxPartySize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bLeavingPersistentParty;


};