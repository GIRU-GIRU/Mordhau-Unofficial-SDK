#pragma once

#include "CoreMinimal.h"
#include "UpdateMordhauSession.generated.h"

UCLASS()
class UUpdateMordhauSession : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "UpdateMordhauSession")
	class UUpdateMordhauSession* STATIC_UpdateMordhauSession(const struct FServerSearchResult& Session);

};