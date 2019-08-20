#pragma once

#include "CoreMinimal.h"
#include "HeadWearable.generated.h"

UCLASS()
class UHeadWearable : public UMordhauWearable
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DefaultCoif;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData01[0x10];

	UFUNCTION(BlueprintCallable, Category = "HeadWearable")
	int GetCoifWearablesNum();
	UFUNCTION(BlueprintCallable, Category = "HeadWearable")
		class UClass* GetCoifWearable(int Index);

};