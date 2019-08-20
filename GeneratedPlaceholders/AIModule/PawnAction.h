#pragma once

#include "CoreMinimal.h"
#include "PawnAction.generated.h"

UCLASS()
class UPawnAction : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnAction* ChildAction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnAction* ParentAction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPawnActionsComponent* OwnerComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* Instigator;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBrainComponent* BrainComp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowNewSameClassInstance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bReplaceActiveSameClassInstance : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldPauseMovement : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAlwaysNotifyOnFinished : 1;

	UFUNCTION(BlueprintCallable, Category = "PawnAction")
	TEnumAsByte<EAIRequestPriority> GetActionPriority();
	UFUNCTION(BlueprintCallable, Category = "PawnAction")
		void Finish(TEnumAsByte<EPawnActionResult> WithResult);
	UFUNCTION(BlueprintCallable, Category = "PawnAction")
		class UPawnAction* STATIC_CreateActionInstance(class UObject* WorldContextObject, class UClass* ActionClass);

};