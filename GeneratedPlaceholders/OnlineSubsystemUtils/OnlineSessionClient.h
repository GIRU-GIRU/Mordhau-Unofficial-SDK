#pragma once

#include "CoreMinimal.h"
#include "OnlineSessionClient.generated.h"

UCLASS()
class UOnlineSessionClient : public UOnlineSession
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsFromInvite;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHandlingDisconnect;


};