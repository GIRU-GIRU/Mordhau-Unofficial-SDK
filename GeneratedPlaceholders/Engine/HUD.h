#pragma once

#include "CoreMinimal.h"
#include "HUD.generated.h"

UCLASS()
class AHUD : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class APlayerController* PlayerOwner;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLostFocusPaused : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowHUD : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowDebugInfo : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int CurrentTargetIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowHitBoxDebugInfo : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShowOverlays : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableDebugTextShadow : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class AActor*> PostRenderedActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> DebugDisplay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FName> ToggledDebugCategories;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCanvas* Canvas;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UCanvas* DebugCanvas;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDebugTextInfo> DebugTextList;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ShowDebugTargetDesiredClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class AActor* ShowDebugTargetActor;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void ShowHUD();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ShowDebugToggleSubCategory(const struct FName& Category);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ShowDebugForReticleTargetToggle(class UClass* DesiredClass);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ShowDebug(const struct FName& DebugType);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void RemoveDebugText(class AActor* SrcActor, bool bLeaveDurationText);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void RemoveAllDebugStrings();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ReceiveHitBoxRelease(const struct FName& BoxName);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ReceiveHitBoxEndCursorOver(const struct FName& BoxName);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ReceiveHitBoxClick(const struct FName& BoxName);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ReceiveHitBoxBeginCursorOver(const struct FName& BoxName);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void ReceiveDrawHUD(int SizeX, int SizeY);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		struct FVector Project(const struct FVector& Location);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void PreviousDebugTarget();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void NextDebugTarget();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void GetTextSize(const struct FString& Text, class UFont* Font, float Scale, float* OutWidth, float* OutHeight);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		class APlayerController* GetOwningPlayerController();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		class APawn* GetOwningPawn();
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void GetActorsInSelectionRectangle(class UClass* ClassFilter, const struct FVector2D& FirstPoint, const struct FVector2D& SecondPoint, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed, TArray<class AActor*>* OutActors);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawTextureSimple(class UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawTexture(class UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, const struct FLinearColor& TintColor, TEnumAsByte<EBlendMode> BlendMode, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawText(const struct FString& Text, const struct FLinearColor& TextColor, float ScreenX, float ScreenY, class UFont* Font, float Scale, bool bScalePosition);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawRect(const struct FLinearColor& RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawMaterialTriangle(class UMaterialInterface* Material, const struct FVector2D& V0_Pos, const struct FVector2D& V1_Pos, const struct FVector2D& V2_Pos, const struct FVector2D& V0_UV, const struct FVector2D& V1_UV, const struct FVector2D& V2_UV, const struct FLinearColor& V0_Color, const struct FLinearColor& V1_Color, const struct FLinearColor& V2_Color);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawMaterialSimple(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawMaterial(class UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, const struct FVector2D& RotPivot);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, const struct FLinearColor& LineColor, float LineThickness);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void Deproject(float ScreenX, float ScreenY, struct FVector* WorldPosition, struct FVector* WorldDirection);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void AddHitBox(const struct FVector2D& Position, const struct FVector2D& Size, const struct FName& InName, bool bConsumesInput, int Priority);
	UFUNCTION(BlueprintCallable, Category = "HUD")
		void AddDebugText(const struct FString& DebugText, class AActor* SrcActor, float Duration, const struct FVector& Offset, const struct FVector& DesiredOffset, const struct FColor& TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, class UFont* InFont, float FontScale, bool bDrawShadow);

};