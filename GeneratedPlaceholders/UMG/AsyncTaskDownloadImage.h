#pragma once

#include "CoreMinimal.h"
#include "AsyncTaskDownloadImage.generated.h"

UCLASS()
class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate onSuccess;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnFail;

	UFUNCTION(BlueprintCallable, Category = "AsyncTaskDownloadImage")
	class UAsyncTaskDownloadImage* STATIC_DownloadImage(const struct FString& URL);

};