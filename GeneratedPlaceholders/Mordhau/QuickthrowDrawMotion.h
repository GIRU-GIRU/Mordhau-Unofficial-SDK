#pragma once

#include "CoreMinimal.h"
#include "QuickthrowDrawMotion.generated.h"

UCLASS()
class UQuickthrowDrawMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AMordhauEquipment* RangedEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Slot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Stage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FirstStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SecondStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ThirdStageEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasFiredLocally;


};