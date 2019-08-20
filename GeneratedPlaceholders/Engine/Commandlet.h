#pragma once

#include "CoreMinimal.h"
#include "Commandlet.generated.h"

UCLASS()
class UCommandlet : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString HelpDescription;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString HelpUsage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString HelpWebLink;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> HelpParamNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> HelpParamDescriptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char IsServer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char IsClient : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char IsEditor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char LogToConsole : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ShowErrorCount : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ShowProgress : 1;


};