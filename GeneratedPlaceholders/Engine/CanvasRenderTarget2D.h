#pragma once

#include "CoreMinimal.h"
#include "CanvasRenderTarget2D.generated.h"

UCLASS()
class UCanvasRenderTarget2D : public UTextureRenderTarget2D
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate OnCanvasRenderTargetUpdate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UWorld> World;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bShouldClearRenderTargetOnReceiveUpdate;

	UFUNCTION(BlueprintCallable, Category = "CanvasRenderTarget2D")
	void UpdateResource();
	UFUNCTION(BlueprintCallable, Category = "CanvasRenderTarget2D")
		void ReceiveUpdate(class UCanvas* Canvas, int Width, int Height);
	UFUNCTION(BlueprintCallable, Category = "CanvasRenderTarget2D")
		void GetSize(int* Width, int* Height);
	UFUNCTION(BlueprintCallable, Category = "CanvasRenderTarget2D")
		class UCanvasRenderTarget2D* STATIC_CreateCanvasRenderTarget2D(class UObject* WorldContextObject, class UClass* CanvasRenderTarget2DClass, int Width, int Height);

};