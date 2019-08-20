#pragma once

#include "CoreMinimal.h"
#include "ActorChannel.generated.h"

UCLASS()
class UActorChannel : public UChannel
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* Actor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> CreateSubObjects;


};