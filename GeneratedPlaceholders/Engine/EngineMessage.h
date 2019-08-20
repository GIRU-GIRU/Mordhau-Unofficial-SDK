#pragma once

#include "CoreMinimal.h"
#include "EngineMessage.generated.h"

UCLASS()
class UEngineMessage : public ULocalMessage
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString FailedPlaceMessage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString MaxedOutMessage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString EnteredMessage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LeftMessage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString GlobalNameChange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SpecEnteredMessage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString NewPlayerMessage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString NewSpecMessage;


};