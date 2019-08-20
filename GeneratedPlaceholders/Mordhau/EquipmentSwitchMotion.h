#pragma once

#include "CoreMinimal.h"
#include "EquipmentSwitchMotion.generated.h"

UCLASS()
class UEquipmentSwitchMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bHasFinishedSwitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char SwitchingToSlot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> SwitchingTo;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> HiddenLeft;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> HiddenRight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Montage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReachEnd;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ESwitchStage Stage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float LocalVirtualReparentStart;

	UFUNCTION(BlueprintCallable, Category = "EquipmentSwitchMotion")
	class AMordhauEquipment* GetSwitchingTo();

};