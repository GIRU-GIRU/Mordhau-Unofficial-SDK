#pragma once

#include "CoreMinimal.h"
#include "SafeZone.generated.h"

UCLASS()
class USafeZone : public UContentWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool PadLeft;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool PadRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool PadTop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool PadBottom;

	UFUNCTION(BlueprintCallable, Category = "SafeZone")
	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);

};