#pragma once

#include "CoreMinimal.h"
#include "RangedReleaseMotion.generated.h"

UCLASS()
class URangedReleaseMotion : public UMordhauMotion
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment> RangedEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* RangedEquipmentClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauProjectile> CreatedLocalProjectile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CurrentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* CurrentEquipmentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ReleaseMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* Release1PMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ReleaseEquipmentMontage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAnimMontage* ReleaseEquipment1PMontage;


};