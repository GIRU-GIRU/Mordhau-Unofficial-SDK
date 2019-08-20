#pragma once

#include "CoreMinimal.h"
#include "InteractionComponent.generated.h"

UCLASS()
class UInteractionComponent : public UBoxComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMeshComponent*> VisualMeshComponents;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsInteractable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsHighlighted;

	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
	void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		void OnInteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		void OnInteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		void OnHighlightStart();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		void OnHighlightEnd();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		void InteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponent")
		bool CanInteract(class AAdvancedCharacter* Character);

};