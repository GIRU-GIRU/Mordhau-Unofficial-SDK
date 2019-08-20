#pragma once

#include "CoreMinimal.h"
#include "GameMapsSettings.generated.h"

UCLASS()
class UGameMapsSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath EditorStartupMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LocalMapOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath TransitionMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bUseSplitscreen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETwoPlayerSplitScreenType> TwoPlayerSplitscreenLayout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EThreePlayerSplitScreenType> ThreePlayerSplitscreenLayout;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOffsetPlayerGamepadIds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GameInstanceClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath GameDefaultMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath ServerDefaultMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GlobalDefaultGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GlobalDefaultServerGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameModeName> GameModeMapPrefixes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameModeName> GameModeClassAliases;


};