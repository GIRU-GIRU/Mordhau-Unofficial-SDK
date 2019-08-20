#pragma once

#include "CoreMinimal.h"
#include "LevelSequenceBurnIn.generated.h"

UCLASS()
class ULevelSequenceBurnIn : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLevelSequencePlayerSnapshot FrameInformation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ALevelSequenceActor* LevelSequenceActor;

	UFUNCTION(BlueprintCallable, Category = "LevelSequenceBurnIn")
	void SetSettings(class UObject* InSettings);
	UFUNCTION(BlueprintCallable, Category = "LevelSequenceBurnIn")
		class UClass* GetSettingsClass();

};