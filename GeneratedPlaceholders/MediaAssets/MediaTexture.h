#pragma once

#include "CoreMinimal.h"
#include "MediaTexture.generated.h"

UCLASS()
class UMediaTexture : public UTexture
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureAddress> AddressX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETextureAddress> AddressY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool AutoClear;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor ClearColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMediaPlayer* MediaPlayer;

	UFUNCTION(BlueprintCallable, Category = "MediaTexture")
	void SetMediaPlayer(class UMediaPlayer* NewMediaPlayer);
	UFUNCTION(BlueprintCallable, Category = "MediaTexture")
		int GetWidth();
	UFUNCTION(BlueprintCallable, Category = "MediaTexture")
		class UMediaPlayer* GetMediaPlayer();
	UFUNCTION(BlueprintCallable, Category = "MediaTexture")
		int GetHeight();
	UFUNCTION(BlueprintCallable, Category = "MediaTexture")
		float GetAspectRatio();

};