#pragma once

#include "CoreMinimal.h"
#include "DragDropOperation.generated.h"

UCLASS()
class UDragDropOperation : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString Tag;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* Payload;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UWidget* DefaultDragVisual;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EDragPivot Pivot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D Offset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnDrop;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnDragCancelled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnDragged;

	UFUNCTION(BlueprintCallable, Category = "DragDropOperation")
	void Drop(const struct FPointerEvent& PointerEvent);
	UFUNCTION(BlueprintCallable, Category = "DragDropOperation")
		void Dragged(const struct FPointerEvent& PointerEvent);
	UFUNCTION(BlueprintCallable, Category = "DragDropOperation")
		void DragCancelled(const struct FPointerEvent& PointerEvent);

};