#pragma once

#include "CoreMinimal.h"
#include "FindMordhauServerSessionByAddress.generated.h"

UCLASS()
class UFindMordhauServerSessionByAddress : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FServerAddress Address;

	UFUNCTION(BlueprintCallable, Category = "FindMordhauServerSessionByAddress")
	class UFindMordhauServerSessionByAddress* STATIC_FindMordhauServerSessionByAddress(const struct FServerAddress& Address);

};