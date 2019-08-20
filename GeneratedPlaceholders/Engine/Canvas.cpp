#include "Canvas.h"

struct FVector2D UCanvas::K2_TextSize(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& Scale) {
}
	struct FVector2D UCanvas::K2_StrLen(class UFont* RenderFont, const struct FString& RenderText) {
}
	struct FVector UCanvas::K2_Project(const struct FVector& WorldLocation) {
}
	void UCanvas::K2_DrawTriangle(class UTexture* RenderTexture, TArray<struct FCanvasUVTri> Triangles) {
}
	void UCanvas::K2_DrawTexture(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, TEnumAsByte<EBlendMode> BlendMode, float Rotation, const struct FVector2D& PivotPoint) {
}
	void UCanvas::K2_DrawText(class UFont* RenderFont, const struct FString& RenderText, const struct FVector2D& ScreenPosition, const struct FLinearColor& RenderColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor) {
}
	void UCanvas::K2_DrawPolygon(class UTexture* RenderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& Radius, int NumberOfSides, const struct FLinearColor& RenderColor) {
}
	void UCanvas::K2_DrawMaterialTriangle(class UMaterialInterface* RenderMaterial, TArray<struct FCanvasUVTri> Triangles) {
}
	void UCanvas::K2_DrawMaterial(class UMaterialInterface* RenderMaterial, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, float Rotation, const struct FVector2D& PivotPoint) {
}
	void UCanvas::K2_DrawLine(const struct FVector2D& ScreenPositionA, const struct FVector2D& ScreenPositionB, float Thickness, const struct FLinearColor& RenderColor) {
}
	void UCanvas::K2_DrawBox(const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, float Thickness, const struct FLinearColor& RenderColor) {
}
	void UCanvas::K2_DrawBorder(class UTexture* BorderTexture, class UTexture* BackgroundTexture, class UTexture* LeftBorderTexture, class UTexture* RightBorderTexture, class UTexture* TopBorderTexture, class UTexture* BottomBorderTexture, const struct FVector2D& ScreenPosition, const struct FVector2D& ScreenSize, const struct FVector2D& CoordinatePosition, const struct FVector2D& CoordinateSize, const struct FLinearColor& RenderColor, const struct FVector2D& BorderScale, const struct FVector2D& BackgroundScale, float Rotation, const struct FVector2D& PivotPoint, const struct FVector2D& CornerSize) {
}
	void UCanvas::K2_Deproject(const struct FVector2D& ScreenPosition, struct FVector* WorldOrigin, struct FVector* WorldDirection) {
}
