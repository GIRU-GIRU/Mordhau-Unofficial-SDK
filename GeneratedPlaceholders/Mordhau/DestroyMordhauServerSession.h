#pragma once

#include "CoreMinimal.h"
#include "DestroyMordhauServerSession.generated.h"

UCLASS()
class UDestroyMordhauServerSession : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onFailure;

	UFUNCTION(BlueprintCallable, Category = "DestroyMordhauServerSession")
	class UDestroyMordhauServerSession* STATIC_DestroyMordhauServerSession();

};