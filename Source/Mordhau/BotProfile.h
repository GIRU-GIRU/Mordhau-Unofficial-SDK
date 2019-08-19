// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BotProfile.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UBotProfile : public UObject
{
	GENERATED_BODY()
public:
	//struct FString                                     BotName;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                UseBotLoadoutProfileID;
	//struct FCharacterProfile                           CharacterProfile;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass*                                      BehaviorProfile;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeBehavior;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeName;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeAppearance;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeFace;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeVoice;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeSkills;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeEquipment;
UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bRandomizeWearables;

UFUNCTION(BlueprintCallable, Category = "BotProfileFns")
void AssignToController(class AMordhauAIController* Controller);
};
