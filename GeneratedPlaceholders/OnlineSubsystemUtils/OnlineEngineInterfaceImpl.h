#pragma once

#include "CoreMinimal.h"
#include "OnlineEngineInterfaceImpl.generated.h"

UCLASS()
class UOnlineEngineInterfaceImpl : public UOnlineEngineInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName VoiceSubsystemNameOverride;


};