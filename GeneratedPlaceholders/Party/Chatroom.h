#pragma once

#include "CoreMinimal.h"
#include "Chatroom.generated.h"

UCLASS()
class UChatroom : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString CurrentChatRoomId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxChatRoomRetries;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumChatRoomRetries;


};