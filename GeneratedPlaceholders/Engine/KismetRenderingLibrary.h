#pragma once

#include "CoreMinimal.h"
#include "KismetRenderingLibrary.generated.h"

UCLASS()
class UKismetRenderingLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:

	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
	class UTexture2D* STATIC_RenderTargetCreateStaticTexture2DEditorOnly(class UTextureRenderTarget2D* RenderTarget, const struct FString& Name, TEnumAsByte<ETextureCompressionSettings> CompressionSettings, TEnumAsByte<ETextureMipGenSettings> MipSettings);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_ReleaseRenderTarget2D(class UTextureRenderTarget2D* TextureRenderTarget);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		struct FColor STATIC_ReadRenderTargetUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		struct FLinearColor STATIC_ReadRenderTargetRawUV(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, float U, float V);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		struct FLinearColor STATIC_ReadRenderTargetRawPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int X, int Y);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		struct FColor STATIC_ReadRenderTargetPixel(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, int X, int Y);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		struct FSkelMeshSkinWeightInfo STATIC_MakeSkinWeightInfo(int Bone0, unsigned char Weight0, int Bone1, unsigned char Weight1, int Bone2, unsigned char Weight2, int Bone3, unsigned char Weight3);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		class UTexture2D* STATIC_ImportFileAsTexture2D(class UObject* WorldContextObject, const struct FString& Filename);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_ExportTexture2D(class UObject* WorldContextObject, class UTexture2D* Texture, const struct FString& FilePath, const struct FString& Filename);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_ExportRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FString& FilePath, const struct FString& Filename);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_EndDrawCanvasToRenderTarget(class UObject* WorldContextObject, const struct FDrawToRenderTargetContext& Context);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_DrawMaterialToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UMaterialInterface* Material);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		class UTextureRenderTarget2D* STATIC_CreateRenderTarget2D(class UObject* WorldContextObject, int Width, int Height, TEnumAsByte<ETextureRenderTargetFormat> Format);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_ConvertRenderTargetToTexture2DEditorOnly(class UObject* WorldContextObject, class UTextureRenderTarget2D* RenderTarget, class UTexture2D* Texture);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_ClearRenderTarget2D(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, const struct FLinearColor& ClearColor);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_BreakSkinWeightInfo(const struct FSkelMeshSkinWeightInfo& InWeight, int* Bone0, unsigned char* Weight0, int* Bone1, unsigned char* Weight1, int* Bone2, unsigned char* Weight2, int* Bone3, unsigned char* Weight3);
	UFUNCTION(BlueprintCallable, Category = "KismetRenderingLibrary")
		void STATIC_BeginDrawCanvasToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* TextureRenderTarget, class UCanvas** Canvas, struct FVector2D* Size, struct FDrawToRenderTargetContext* Context);

};