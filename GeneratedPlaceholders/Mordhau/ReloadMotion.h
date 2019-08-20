#pragma once

#include "CoreMinimal.h"
#include "ReloadMotion.generated.h"

UCLASS()
class UReloadMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> RangedEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CurrentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CurrentEquipmentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ReloadMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Reload1PMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ReloadEquipmentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Reload1PEquipmentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent> CurrentReloadSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReachTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ReloadTime;


};