#pragma once

#include "CoreMinimal.h"
#include "GameSession.generated.h"

UCLASS()
class AGameSession : public AInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxSpectators;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxPlayers;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxPartySize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MaxSplitscreensPerConnection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRequiresPushToTalk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SessionName;


};