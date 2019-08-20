#pragma once

#include "CoreMinimal.h"
#include "BotProfile.generated.h"

UCLASS()
class UBotProfile : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString BotName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int UseBotLoadoutProfileID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile CharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* BehaviorProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeBehavior;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeAppearance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeFace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeVoice;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeSkills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRandomizeWearables;

	UFUNCTION(BlueprintCallable, Category = "BotProfile")
	void AssignToController(class AMordhauAIController* Controller);

};