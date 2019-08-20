#pragma once

#include "CoreMinimal.h"
#include "GameplayTask_ClaimResource.generated.h"

UCLASS()
class UGameplayTask_ClaimResource : public UGameplayTask
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "GameplayTask_ClaimResource")
	class UGameplayTask_ClaimResource* STATIC_ClaimResources(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, TArray<class UClass*> ResourceClasses, unsigned char Priority, const struct FName& TaskInstanceName);
	UFUNCTION(BlueprintCallable, Category = "GameplayTask_ClaimResource")
		class UGameplayTask_ClaimResource* STATIC_ClaimResource(const TScriptInterface<class UGameplayTaskOwnerInterface>& InTaskOwner, class UClass* ResourceClass, unsigned char Priority, const struct FName& TaskInstanceName);

};