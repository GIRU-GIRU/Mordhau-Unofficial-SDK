#pragma once

#include "CoreMinimal.h"
#include "Texture.generated.h"

UCLASS()
class UTexture : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid LightingGuid;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LODBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumCinematicMipLevels;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureCompressionSettings> CompressionSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureFilter> Filter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureGroup> LODGroup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char SRGB : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char NeverStream : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNoTiling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseCinematicMipLevels : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAsyncResourceReleaseHasBeenStarted : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CachedCombinedLODBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAssetUserData*> AssetUserData;


};