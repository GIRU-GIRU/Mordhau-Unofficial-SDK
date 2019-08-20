#pragma once

#include "CoreMinimal.h"
#include "BTTask_VoiceOrEmote.generated.h"

UCLASS()
class UBTTask_VoiceOrEmote : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> VoiceCommandsList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<unsigned char> EmotesList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bForceEmote;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float GlobalCooldown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Chance;


};