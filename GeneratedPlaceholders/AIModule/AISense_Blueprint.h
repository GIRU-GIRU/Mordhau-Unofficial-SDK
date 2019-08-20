#pragma once

#include "CoreMinimal.h"
#include "AISense_Blueprint.generated.h"

UCLASS()
class UAISense_Blueprint : public UAISense
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ListenerDataType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAIPerceptionComponent*> ListenerContainer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UAISenseEvent*> UnprocessedEvents;

	UFUNCTION(BlueprintCallable, Category = "AISense_Blueprint")
	float OnUpdate(TArray<class UAISenseEvent*> EventsToProcess);
	UFUNCTION(BlueprintCallable, Category = "AISense_Blueprint")
		void OnListenerUpdated(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	UFUNCTION(BlueprintCallable, Category = "AISense_Blueprint")
		void OnListenerUnregistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	UFUNCTION(BlueprintCallable, Category = "AISense_Blueprint")
		void OnListenerRegistered(class AActor* ActorListener, class UAIPerceptionComponent* PerceptionComponent);
	UFUNCTION(BlueprintCallable, Category = "AISense_Blueprint")
		void K2_OnNewPawn(class APawn* NewPawn);
	UFUNCTION(BlueprintCallable, Category = "AISense_Blueprint")
		void GetAllListenerComponents(TArray<class UAIPerceptionComponent*>* ListenerComponents);
	UFUNCTION(BlueprintCallable, Category = "AISense_Blueprint")
		void GetAllListenerActors(TArray<class AActor*>* ListenerActors);

};