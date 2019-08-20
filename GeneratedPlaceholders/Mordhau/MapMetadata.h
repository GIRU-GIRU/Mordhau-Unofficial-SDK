#pragma once

#include "CoreMinimal.h"
#include "MapMetadata.generated.h"

UCLASS()
class UMapMetadata : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Name;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Description;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath BaseMap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoftObjectPath> GameModeMaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Thumbnail;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture2D*> BackgroundImages;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture2D*> ForegroundImages;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FText> Tips;


};