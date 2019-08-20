#pragma once

#include "CoreMinimal.h"
#include "AIAsyncTaskBlueprintProxy.generated.h"

UCLASS()
class UAIAsyncTaskBlueprintProxy : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnFail;

	UFUNCTION(BlueprintCallable, Category = "AIAsyncTaskBlueprintProxy")
	void OnMoveCompleted(const struct FAIRequestID& RequestID, TEnumAsByte<EPathFollowingResult> MovementResult);

};