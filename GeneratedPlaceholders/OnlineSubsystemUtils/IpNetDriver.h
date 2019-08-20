#pragma once

#include "CoreMinimal.h"
#include "IpNetDriver.generated.h"

UCLASS()
class UIpNetDriver : public UNetDriver
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char LogPortUnreach : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AllowPlayerPortUnreach : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t MaxPortCountToTry;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ServerDesiredSocketReceiveBufferBytes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ServerDesiredSocketSendBufferBytes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ClientDesiredSocketReceiveBufferBytes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t ClientDesiredSocketSendBufferBytes;


};