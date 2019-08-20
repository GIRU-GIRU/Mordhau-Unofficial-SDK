#pragma once

#include "CoreMinimal.h"
#include "GameViewportClient.generated.h"

UCLASS()
class UGameViewportClient : public UScriptViewportClient
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UConsole* ViewportConsole;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDebugDisplayProperty> DebugProperties;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorld* World;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameInstance* GameInstance;

	UFUNCTION(BlueprintCallable, Category = "GameViewportClient")
	void SSSwapControllers();
	UFUNCTION(BlueprintCallable, Category = "GameViewportClient")
		void ShowTitleSafeArea();
	UFUNCTION(BlueprintCallable, Category = "GameViewportClient")
		void SetConsoleTarget(int PlayerIndex);

};