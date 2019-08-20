#pragma once

#include "CoreMinimal.h"
#include "Texture2D.generated.h"

UCLASS()
class UTexture2D : public UTexture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StreamingIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LevelIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int FirstResourceMemMip;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTemporarilyDisableStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsStreamable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHasStreamingUpdatePending : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForceMiplevelsToBeResident : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIgnoreStreamingMipBias : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGlobalForceMipLevelsToBeResident : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureAddress> AddressX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureAddress> AddressY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FIntPoint ImportedSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	double ForceMipLevelsToBeResidentTimestamp;

	UFUNCTION(BlueprintCallable, Category = "Texture2D")
	int Blueprint_GetSizeY();
	UFUNCTION(BlueprintCallable, Category = "Texture2D")
		int Blueprint_GetSizeX();

};