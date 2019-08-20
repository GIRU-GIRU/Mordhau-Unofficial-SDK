#pragma once

#include "CoreMinimal.h"
#include "OnlineHotfixManager.generated.h"

UCLASS()
class UOnlineHotfixManager : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString OSSName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString HotfixManagerClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString DebugPrefix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UObject*> AssetsHotfixedFromIniFiles;

	UFUNCTION(BlueprintCallable, Category = "OnlineHotfixManager")
	void StartHotfixProcess();

};