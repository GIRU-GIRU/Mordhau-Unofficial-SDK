#pragma once

#include "CoreMinimal.h"
#include "JoinMordhauServerSession.generated.h"

UCLASS()
class UJoinMordhauServerSession : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "JoinMordhauServerSession")
	class UJoinMordhauServerSession* STATIC_JoinMordhauServerSession(const struct FServerSearchResult& SearchResult);

};