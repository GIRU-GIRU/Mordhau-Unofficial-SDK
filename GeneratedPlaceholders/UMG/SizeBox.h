#pragma once

#include "CoreMinimal.h"
#include "SizeBox.generated.h"

UCLASS()
class USizeBox : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_WidthOverride : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_HeightOverride : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MinDesiredWidth : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MinDesiredHeight : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MaxDesiredWidth : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MaxDesiredHeight : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOverride_MaxAspectRatio : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WidthOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HeightOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDesiredWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDesiredHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDesiredWidth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDesiredHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxAspectRatio;

	UFUNCTION(BlueprintCallable, Category = "SizeBox")
	void SetWidthOverride(float InWidthOverride);
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void SetMinDesiredWidth(float InMinDesiredWidth);
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void SetMinDesiredHeight(float InMinDesiredHeight);
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void SetMaxDesiredWidth(float InMaxDesiredWidth);
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void SetMaxDesiredHeight(float InMaxDesiredHeight);
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void SetMaxAspectRatio(float InMaxAspectRatio);
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void SetHeightOverride(float InHeightOverride);
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void ClearWidthOverride();
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void ClearMinDesiredWidth();
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void ClearMinDesiredHeight();
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void ClearMaxDesiredWidth();
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void ClearMaxDesiredHeight();
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void ClearMaxAspectRatio();
	UFUNCTION(BlueprintCallable, Category = "SizeBox")
		void ClearHeightOverride();

};