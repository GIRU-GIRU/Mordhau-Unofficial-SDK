#pragma once

#include "CoreMinimal.h"
#include "LegsWearable.generated.h"

UCLASS()
class ULegsWearable : public UMordhauWearable
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector LegsBouncyLimits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultFeet;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x10];

	UFUNCTION(BlueprintCallable, Category = "LegsWearable")
	int GetFeetWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "LegsWearable")
		class UClass* GetFeetWearable(int Index);

};