#pragma once

#include "CoreMinimal.h"
#include "AIPerceptionStimuliSourceComponent.generated.h"

UCLASS()
class UAIPerceptionStimuliSourceComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutoRegisterAsSource : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*> RegisterAsSourceForSenses;

	UFUNCTION(BlueprintCallable, Category = "AIPerceptionStimuliSourceComponent")
	void UnregisterFromSense(class UClass* SenseClass);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionStimuliSourceComponent")
		void UnregisterFromPerceptionSystem();
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionStimuliSourceComponent")
		void RegisterWithPerceptionSystem();
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionStimuliSourceComponent")
		void RegisterForSense(class UClass* SenseClass);

};