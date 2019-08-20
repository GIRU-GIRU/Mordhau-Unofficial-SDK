#pragma once

#include "CoreMinimal.h"
#include "Font.generated.h"

UCLASS()
class UFont : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFontCacheType FontCacheType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FFontCharacter> Characters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture2D*> Textures;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int IsRemapped;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float EmScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Ascent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Descent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float Leading;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int Kerning;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFontImportOptionsData ImportOptions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumCharacters;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<int> MaxCharHeight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ScalingFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LegacyFontSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName LegacyFontName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FCompositeFont CompositeFont;


};