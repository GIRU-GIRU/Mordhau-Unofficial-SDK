#pragma once

#include "CoreMinimal.h"
#include "Channel.generated.h"

UCLASS()
class UChannel : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UNetConnection* Connection;


};