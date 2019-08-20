#pragma once

#include "CoreMinimal.h"
#include "BillboardComponent.generated.h"

UCLASS()
class UBillboardComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* Sprite;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsScreenSizeScaled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ScreenSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float U;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float UL;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float V;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VL;

	UFUNCTION(BlueprintCallable, Category = "BillboardComponent")
	void SetUV(int NewU, int NewUL, int NewV, int NewVL);
	UFUNCTION(BlueprintCallable, Category = "BillboardComponent")
		void SetSpriteAndUV(class UTexture2D* NewSprite, int NewU, int NewUL, int NewV, int NewVL);
	UFUNCTION(BlueprintCallable, Category = "BillboardComponent")
		void SetSprite(class UTexture2D* NewSprite);

};