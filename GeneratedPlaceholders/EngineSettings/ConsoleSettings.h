#pragma once

#include "CoreMinimal.h"
#include "ConsoleSettings.generated.h"

UCLASS()
class UConsoleSettings : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxScrollbackSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FAutoCompleteCommand> ManualAutoCompleteList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> AutoCompleteMapPaths;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BackgroundOpacityPercentage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bOrderTopToBottom;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor InputColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor HistoryColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor AutoCompleteCommandColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor AutoCompleteCVarColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor AutoCompleteFadedColor;


};