#pragma once

#include "CoreMinimal.h"
#include "BTTask_SwitchEquipment.generated.h"

UCLASS()
class UBTTask_SwitchEquipment : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bMelee;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> AllowedSubclasses;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> NotAllowedSubclasses;


};