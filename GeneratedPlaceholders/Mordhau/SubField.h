#pragma once

#include "CoreMinimal.h"
#include "SubField.generated.h"

UCLASS()
class ASubField : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent* Area;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsSubFieldDeactivated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsSubFieldHidden;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMasterField> Master;

	UFUNCTION(BlueprintCallable, Category = "SubField")
	void SetSubFieldHidden(bool bValue);
	UFUNCTION(BlueprintCallable, Category = "SubField")
		class AMasterField* GetMaster();
	UFUNCTION(BlueprintCallable, Category = "SubField")
		void DeactivateSubField();
	UFUNCTION(BlueprintCallable, Category = "SubField")
		void BeginSubFieldDeactivation();

};