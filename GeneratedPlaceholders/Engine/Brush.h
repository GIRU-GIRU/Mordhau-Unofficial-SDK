#pragma once

#include "CoreMinimal.h"
#include "Brush.generated.h"

UCLASS()
class ABrush : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBrushType> BrushType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor BrushColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int PolyFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bColored : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSolidWhenSelected : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPlaceableFromClassBrowser : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNotForClientOrServer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UModel* Brush;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBrushComponent* BrushComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInManipulation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGeomSelection> SavedSelections;


};