#pragma once

#include "CoreMinimal.h"
#include "StereoLayerComponent.generated.h"

UCLASS()
class UStereoLayerComponent : public USceneComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture* Texture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture* LeftTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bQuadPreserveTextureRatio : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D QuadSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FBox2D UVRect;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CylinderRadius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CylinderOverlayArc;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CylinderHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EStereoLayerType> StereoLayerType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EStereoLayerShape> StereoLayerShape;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Priority;

	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
	void SetUVRect(const struct FBox2D& InUVRect);
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		void SetTexture(class UTexture* InTexture);
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		void SetQuadSize(const struct FVector2D& InQuadSize);
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		void SetPriority(int InPriority);
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		void MarkTextureForUpdate();
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		struct FBox2D GetUVRect();
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		class UTexture* GetTexture();
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		struct FVector2D GetQuadSize();
	UFUNCTION(BlueprintCallable, Category = "StereoLayerComponent")
		int GetPriority();

};