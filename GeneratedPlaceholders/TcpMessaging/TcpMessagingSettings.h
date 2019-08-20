#pragma once

#include "CoreMinimal.h"
#include "TcpMessagingSettings.generated.h"

UCLASS()
class UTcpMessagingSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool EnableTransport;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ListenEndpoint;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ConnectToEndpoints;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ConnectionRetryDelay;


};