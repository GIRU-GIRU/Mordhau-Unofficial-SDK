#pragma once

#include "CoreMinimal.h"
#include "BrushBuilder.generated.h"

UCLASS()
class UBrushBuilder : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString BitmapFilename;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ToolTip;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char NotifyBadParams : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FVector> Vertices;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FBuilderPoly> Polys;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName Layer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char MergeCoplanars : 1;


};