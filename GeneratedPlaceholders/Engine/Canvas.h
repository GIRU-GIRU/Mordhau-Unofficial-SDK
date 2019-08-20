#pragma once

#include "CoreMinimal.h"
#include "Canvas.generated.h"

UCLASS()
class UCanvas : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OrgX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OrgY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClipX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float ClipY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor DrawColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCenterX : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCenterY : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNoSmooth : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int SizeY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FPlane ColorModulate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* GradientTexture0;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UReporterGraph* ReporterGraph;

	UFUNCTION(BlueprintCallable, Category = "Canvas")
	struct FVector2D K2_TextSize(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& Scale);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		struct FVector2D K2_StrLen(class UFont* RenderFont, const struct FString& RenderText);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		struct FVector K2_Project(const struct FVector& WorldLocation);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawTriangle(class UTexture* RenderTexture, TArray<struct FCanvasUVTri> Triangles);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, const struct FVector2D& PivotPoint);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawText(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& ScreenPosition, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& Radius, int NumberOfSides, const struct FLinearColor& RenderColor);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, TArray<struct FCanvasUVTri> Triangles);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness, const struct FLinearColor& RenderColor);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize);
	UFUNCTION(BlueprintCallable, Category = "Canvas")
		void K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection);

};