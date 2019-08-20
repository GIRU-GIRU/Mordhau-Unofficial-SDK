#pragma once

#include "CoreMinimal.h"
#include "ArmsWearable.generated.h"

UCLASS()
class UArmsWearable : public UMordhauWearable
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector ArmsBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultHands;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x10];

	UFUNCTION(BlueprintCallable, Category = "ArmsWearable")
	int GetHandsWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "ArmsWearable")
		class UClass* GetHandsWearable(int Index);

};