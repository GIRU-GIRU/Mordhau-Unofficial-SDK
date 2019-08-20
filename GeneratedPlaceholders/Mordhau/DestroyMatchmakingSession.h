#pragma once

#include "CoreMinimal.h"
#include "DestroyMatchmakingSession.generated.h"

UCLASS()
class UDestroyMatchmakingSession : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWorld* World;

	UFUNCTION(BlueprintCallable, Category = "DestroyMatchmakingSession")
	class UDestroyMatchmakingSession* STATIC_DestroyMatchmakingSession(class UObject* WorldContextObject);

};