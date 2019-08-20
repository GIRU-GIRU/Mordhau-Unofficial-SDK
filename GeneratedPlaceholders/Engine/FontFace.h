#pragma once

#include "CoreMinimal.h"
#include "FontFace.generated.h"

UCLASS()
class UFontFace : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString SourceFilename;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFontHinting Hinting;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFontLoadingPolicy LoadingPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EFontLayoutMethod LayoutMethod;


};