#pragma once

#include "CoreMinimal.h"
#include "FileMediaSource.generated.h"

UCLASS()
class UFileMediaSource : public UBaseMediaSource
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString FilePath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool PrecacheFile;

	UFUNCTION(BlueprintCallable, Category = "FileMediaSource")
	void SetFilePath(const struct FString& Path);

};