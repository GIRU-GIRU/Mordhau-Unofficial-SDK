#pragma once

#include "CoreMinimal.h"
#include "Throbber.generated.h"

UCLASS()
class UThrobber : public UWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumberOfPieces;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAnimateHorizontally;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAnimateVertically;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAnimateOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USlateBrushAsset* PieceImage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSlateBrush Image;

	UFUNCTION(BlueprintCallable, Category = "Throbber")
	void SetNumberOfPieces(int InNumberOfPieces);
	UFUNCTION(BlueprintCallable, Category = "Throbber")
		void SetAnimateVertically(bool bInAnimateVertically);
	UFUNCTION(BlueprintCallable, Category = "Throbber")
		void SetAnimateOpacity(bool bInAnimateOpacity);
	UFUNCTION(BlueprintCallable, Category = "Throbber")
		void SetAnimateHorizontally(bool bInAnimateHorizontally);

};