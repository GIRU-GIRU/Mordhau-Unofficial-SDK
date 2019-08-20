#pragma once

#include "CoreMinimal.h"
#include "Console.generated.h"

UCLASS()
class UConsole : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULocalPlayer* ConsoleTargetPlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultTexture_Black;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultTexture_White;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> HistoryBuffer;


};