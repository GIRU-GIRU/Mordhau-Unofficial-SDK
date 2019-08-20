#pragma once

#include "CoreMinimal.h"
#include "WidgetComponent.generated.h"

UCLASS()
class UWidgetComponent : public UMeshComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* WidgetClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FIntPoint DrawSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bManuallyRedraw;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bRedrawRequested;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RedrawTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FIntPoint CurrentDrawSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bDrawAtDesiredSize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D Pivot;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bReceiveHardwareInput;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bWindowFocusable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bApplyGammaCorrection;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class ULocalPlayer* OwnerPlayer;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor BackgroundColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor TintColorAndOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OpacityFromTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EWidgetBlendMode BlendMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsTwoSided;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool TickWhenOffscreen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UUserWidget* Widget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UBodySetup* BodySetup;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* TranslucentMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* TranslucentMaterial_OneSided;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* OpaqueMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* OpaqueMaterial_OneSided;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* MaskedMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* MaskedMaterial_OneSided;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTextureRenderTarget2D* RenderTarget;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* MaterialInstance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bAddedToScreen;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bEditTimeUsable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FName SharedLayerName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int LayerZOrder;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	EWidgetGeometryMode GeometryMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CylinderArcAngle;

	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
	void SetWidget(class UUserWidget* Widget);
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		void SetManuallyRedraw(bool bUseManualRedraw);
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		void SetDrawSize(const struct FVector2D& Size);
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		void RequestRedraw();
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		class UUserWidget* GetUserWidgetObject();
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		class UTextureRenderTarget2D* GetRenderTarget();
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		class ULocalPlayer* GetOwnerPlayer();
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		class UMaterialInstanceDynamic* GetMaterialInstance();
	UFUNCTION(BlueprintCallable, Category = "WidgetComponent")
		struct FVector2D GetDrawSize();

};