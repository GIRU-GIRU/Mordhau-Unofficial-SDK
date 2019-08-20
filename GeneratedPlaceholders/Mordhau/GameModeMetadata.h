#pragma once

#include "CoreMinimal.h"
#include "GameModeMetadata.generated.h"

UCLASS()
class UGameModeMetadata : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Prefix;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Name;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Thumbnail;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FText> Tips;

	UFUNCTION(BlueprintCallable, Category = "GameModeMetadata")
	class UGameModeMetadata* STATIC_GetDefaultObject(class UClass* MetadataClass);

};