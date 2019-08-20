#pragma once

#include "CoreMinimal.h"
#include "DialogueWave.generated.h"

UCLASS()
class UDialogueWave : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMature : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_SubtitleOverride : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SpokenText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SubtitleOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDialogueContextMapping> ContextMappings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid LocalizationGUID;


};