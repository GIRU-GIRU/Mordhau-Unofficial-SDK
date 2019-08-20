#pragma once

#include "CoreMinimal.h"
#include "TextRenderComponent.generated.h"

UCLASS()
class UTextRenderComponent : public UPrimitiveComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FText Text;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* TextMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFont* Font;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizTextAligment> HorizontalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalTextAligment> VerticalAlignment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor TextRenderColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float XScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float YScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WorldSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float InvDefaultSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HorizSpacingAdjust;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float VertSpacingAdjust;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysRenderAsText : 1;

	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
	void SetYScale(float Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetXScale(float Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetWorldSize(float Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetVertSpacingAdjust(float Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetVerticalAlignment(TEnumAsByte<EVerticalTextAligment> Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetTextRenderColor(const struct FColor& Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetTextMaterial(class UMaterialInterface* Material);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetText(const struct FString& Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetHorizSpacingAdjust(float Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetHorizontalAlignment(TEnumAsByte<EHorizTextAligment> Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void SetFont(class UFont* Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		void K2_SetText(const struct FText& Value);
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		struct FVector GetTextWorldSize();
	UFUNCTION(BlueprintCallable, Category = "TextRenderComponent")
		struct FVector GetTextLocalSize();

};