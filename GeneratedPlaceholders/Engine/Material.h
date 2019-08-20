#pragma once

#include "CoreMinimal.h"
#include "Material.generated.h"

UCLASS()
class UMaterial : public UMaterialInterface
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterial* PhysMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColorMaterialInput DiffuseColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColorMaterialInput SpecularColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColorMaterialInput BaseColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput Metallic;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput Specular;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput Roughness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVectorMaterialInput Normal;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColorMaterialInput EmissiveColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput Opacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput OpacityMask;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialDomain> MaterialDomain;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBlendMode> BlendMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDecalBlendMode> DecalBlendMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialDecalResponse> MaterialDecalResponse;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialShadingModel> ShadingModel;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float OpacityMaskClipValue;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCastDynamicShadowAsMasked : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVectorMaterialInput WorldPositionOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVectorMaterialInput WorldDisplacement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput TessellationMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColorMaterialInput SubsurfaceColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput ClearCoat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput ClearCoatRoughness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput AmbientOcclusion;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput Refraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2MaterialInput CustomizedUVs[0x8];
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FMaterialAttributesInput MaterialAttributes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FScalarMaterialInput PixelDepthOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableSeparateTranslucency : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableMobileSeparateTranslucency : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableResponsiveAA : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bScreenSpaceReflections : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bContactShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char TwoSided : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DitheredLODTransition : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char DitherOpacityMask : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowNegativeEmissiveColor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumCustomizedUVs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETranslucencyLightingMode> TranslucencyLightingMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslucencyDirectionalLightingIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char AllowTranslucentCustomDepthWrites : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslucentShadowDensityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslucentSelfShadowDensityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslucentSelfShadowSecondDensityScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslucentSelfShadowSecondOpacity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslucentBackscatteringExponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor TranslucentMultipleScatteringExtinction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TranslucentShadowStartOffset;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableDepthTest : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bWriteOnlyAlpha : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateSphericalParticleNormals : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTangentSpaceNormal : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseEmissiveForDynamicAreaLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBlockGI : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedAsSpecialEngineMaterial : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithSkeletalMesh : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithEditorCompositing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithParticleSprites : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithBeamTrails : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithMeshParticles : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithNiagaraSprites : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithNiagaraRibbons : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithNiagaraMeshParticles : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithGeometryCache : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithStaticLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithMorphTargets : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithSplineMeshes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithInstancedStaticMeshes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsesDistortion : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithClothing : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsedWithUI : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAutomaticallySetUsageInEditor : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bFullyRough : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFullPrecision : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseLightmapDirectionality : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseHQForwardReflections : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsePlanarForwardReflections : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNormalCurvatureToRoughness : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMaterialTessellationMode> D3D11TessellationMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableCrackFreeDisplacement : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableAdaptiveTessellation : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxDisplacement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char Wireframe : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOutputVelocityOnBasePass : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EditorX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EditorY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EditorPitch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int EditorYaw;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UMaterialExpression*> Expressions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMaterialFunctionInfo> MaterialFunctionInfos;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FMaterialParameterCollectionInfo> MaterialParameterCollectionInfos;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanMaskedBeAssumedOpaque : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsMasked : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsPreviewMaterial : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsFunctionPreviewMaterial : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseMaterialAttributes : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseTranslucencyVertexFog : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bComputeFogPerPixel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowDevelopmentShaderCompile : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bIsMaterialEditorStatsMaterial : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t UsageFlagWarnings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EBlendableLocation> BlendableLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int BlendablePriority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool BlendableOutputAlpha;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ERefractionMode> RefractionMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RefractionDepthBias;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FGuid StateId;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<bool> CachedQualityLevelsUsed;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture*> ExpressionTextureReferences;


};