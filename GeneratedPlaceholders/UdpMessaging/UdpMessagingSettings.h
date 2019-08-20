#pragma once

#include "CoreMinimal.h"
#include "UdpMessagingSettings.generated.h"

UCLASS()
class UUdpMessagingSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool EnableTransport;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString UnicastEndpoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString MulticastEndpoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MulticastTimeToLive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> StaticEndpoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool EnableTunnel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TunnelUnicastEndpoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TunnelMulticastEndpoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> RemoteTunnelEndpoints;


};