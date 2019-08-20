#pragma once

#include "CoreMinimal.h"
#include "AIPerceptionComponent.generated.h"

UCLASS()
class UAIPerceptionComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAISenseConfig*> SensesConfig;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* DominantSense;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AAIController* AIOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnPerceptionUpdated;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnTargetPerceptionUpdated;

	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
	void SetSenseEnabled(class UClass* SenseClass, bool bEnable);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
		void RequestStimuliListenerUpdate();
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
		void OnOwnerEndPlay(class AActor* Actor, TEnumAsByte<EEndPlayReason> EndPlayReason);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
		void GetPerceivedHostileActors(TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
		void GetPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
		void GetKnownPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
		void GetCurrentlyPerceivedActors(class UClass* SenseToUse, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "AIPerceptionComponent")
		bool GetActorsPerception(class AActor* Actor, struct FActorPerceptionBlueprintInfo* Info);

};