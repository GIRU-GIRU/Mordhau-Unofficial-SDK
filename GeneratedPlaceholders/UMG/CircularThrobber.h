#pragma once

#include "CoreMinimal.h"
#include "CircularThrobber.generated.h"

UCLASS()
class UCircularThrobber : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumberOfPieces;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Period;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Radius;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* PieceImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateBrush Image;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEnableRadius;

	UFUNCTION(BlueprintCallable, Category = "CircularThrobber")
	void SetRadius(float InRadius);
	UFUNCTION(BlueprintCallable, Category = "CircularThrobber")
		void SetPeriod(float InPeriod);
	UFUNCTION(BlueprintCallable, Category = "CircularThrobber")
		void SetNumberOfPieces(int InNumberOfPieces);

};