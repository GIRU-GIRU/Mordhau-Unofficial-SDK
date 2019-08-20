#pragma once

#include "CoreMinimal.h"
#include "CharacterVoice.generated.h"

UCLASS()
class UCharacterVoice : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* VoiceCommands;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* Hurt;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* Death;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* AttackYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* Breathing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue* Screaming;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D PitchLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> ClipCounts;


};