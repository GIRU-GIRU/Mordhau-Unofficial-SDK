#pragma once

#include "CoreMinimal.h"
#include "SafeZoneSlot.generated.h"

UCLASS()
class USafeZoneSlot : public UPanelSlot
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsTitleSafe;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin SafeAreaScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EHorizontalAlignment> HAlign;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EVerticalAlignment> VAlign;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMargin Padding;


};