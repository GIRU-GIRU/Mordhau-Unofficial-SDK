#include "KismetRenderingLibrary.h"

class UTexture2D* UKismetRenderingLibrary::STATIC_RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D* RenderTarget, const struct FString& Name, TEnumAsByte<ETextureCompressionSettings> CompressionSettings, TEnumAsByte<ETextureMipGenSettings> MipSettings) {
}
	void UKismetRenderingLibrary::STATIC_ReleaseRenderTarget2D(class UTextureRenderTarget2D* TextureRenderTarget) {
}
	struct FColor UKismetRenderingLibrary::STATIC_ReadRenderTargetUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
}
	struct FLinearColor UKismetRenderingLibrary::STATIC_ReadRenderTargetRawUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V) {
}
	struct FLinearColor UKismetRenderingLibrary::STATIC_ReadRenderTargetRawPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int X, int Y) {
}
	struct FColor UKismetRenderingLibrary::STATIC_ReadRenderTargetPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int X, int Y) {
}
	struct FSkelMeshSkinWeightInfo UKismetRenderingLibrary::STATIC_MakeSkinWeightInfo(int Bone0, unsigned char Weight0, int Bone1, unsigned char Weight1, int Bone2, unsigned char Weight2, int Bone3, unsigned char Weight3) {
}
	class UTexture2D* UKismetRenderingLibrary::STATIC_ImportFileAsTexture2D(class UObject* WorldContextObject, const struct FString& Filename) {
}
	void UKismetRenderingLibrary::STATIC_ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, const struct FString& FilePath, const struct FString& Filename) {
}
	void UKismetRenderingLibrary::STATIC_ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FString& FilePath, const struct FString& Filename) {
}
	void UKismetRenderingLibrary::STATIC_EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const struct FDrawToRenderTargetContext& Context) {
}
	void UKismetRenderingLibrary::STATIC_DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material) {
}
	class UTextureRenderTarget2D* UKismetRenderingLibrary::STATIC_CreateRenderTarget2D(class UObject* WorldContextObject, int Width, int Height, TEnumAsByte<ETextureRenderTargetFormat> Format) {
}
	void UKismetRenderingLibrary::STATIC_ConvertRenderTargetToTexture2DEditorOnly(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture2D* Texture) {
}
	void UKismetRenderingLibrary::STATIC_ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FLinearColor& ClearColor) {
}
	void UKismetRenderingLibrary::STATIC_BreakSkinWeightInfo(const struct FSkelMeshSkinWeightInfo& InWeight, int* Bone0, unsigned char* Weight0, int* Bone1, unsigned char* Weight1, int* Bone2, unsigned char* Weight2, int* Bone3, unsigned char* Weight3) {
}
	void UKismetRenderingLibrary::STATIC_BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas** Canvas, struct FVector2D* Size, struct FDrawToRenderTargetContext* Context) {
}
