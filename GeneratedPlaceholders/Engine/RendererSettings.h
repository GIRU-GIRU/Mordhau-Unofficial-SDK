#pragma once

#include "CoreMinimal.h"
#include "RendererSettings.generated.h"

UCLASS()
class URendererSettings : public UDeveloperSettings
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileHDR : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileDisableVertexFog : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxMobileCascades;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EMobileMSAASampleCount> MobileMSAASampleCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileUseLegacyShadingModel : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDiscardUnusedQualityLevels : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOcclusionCulling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinScreenRadiusForLights;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinScreenRadiusForEarlyZPass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinScreenRadiusForCSMdepth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPrecomputedVisibilityWarning : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTextureStreaming : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseDXT5NormalMaps : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bClearCoatEnableSecondNormal : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ReflectionCaptureResolution;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bForwardShading : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bVertexFoggingForOpaque : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowStaticLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseNormalMapsForStaticLighting : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateMeshDistanceFields : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEightBitMeshDistanceFields : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGenerateLandscapeGIData : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCompressMeshDistanceFields : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float TessellationAdaptivePixelsPerTriangle;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSeparateTranslucency : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETranslucentSortPolicy> TranslucentSortPolicy;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector TranslucentSortAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ECustomDepthStencil> CustomDepthStencil;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCustomDepthTaaJitter : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAlphaChannelMode> bEnableAlphaChannelInPostProcessing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseNewAlgorithm : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUsePreExposure : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultFeatureBloom : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultFeatureAmbientOcclusion : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultFeatureAmbientOcclusionStaticFraction : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultFeatureAutoExposure : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAutoExposureMethodUI> DefaultFeatureAutoExposure;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultFeatureMotionBlur : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultFeatureLensFlare : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bTemporalUpsampling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EAntiAliasingMethod> DefaultFeatureAntiAliasing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ELightUnits DefaultPointLightUnits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	ELightUnits DefaultSpotLightUnits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EDefaultBackBufferPixelFormat> DefaultBackBufferPixelFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderUnbuiltPreviewShadowsInGame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStencilForLODDither : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EEarlyZPass> EarlyZPass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEarlyZPassMovable : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEarlyZPassOnlyMaterialMasking : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDBuffer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EClearSceneOptions> ClearSceneMethod;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bBasePassOutputsVelocity : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSelectiveBasePassOutputs : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDefaultParticleCutouts : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int GPUSimulationTextureSizeX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int GPUSimulationTextureSizeY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGlobalClipPlane : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EGBufferFormat> GBufferFormat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseGPUMorphTargets : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bNvidiaAftermathEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bInstancedStereo : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMultiView : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileMultiView : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileMultiViewDirect : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMonoscopicFarField : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bODSCapture : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDebugCanvasInLayer : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float WireframeCullThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportStationarySkylight : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportLowQualityLightmaps : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportPointLightWholeSceneShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportAtmosphericFog : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportSkinCacheShaders : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileEnableStaticAndCSMShadowReceivers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileEnableMovableLightCSMShaderCulling : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileAllowDistanceFieldShadows : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileAllowMovableDirectionalLights : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t MobileNumDynamicPointLights;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bMobileDynamicPointLightsUseStaticBranch : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SkinCacheSceneMemoryLimitInMB;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bGPUSkinLimit2BoneInfluences : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportDepthOnlyIndexBuffers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportReversedIndexBuffers : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSupportMaterialLayers : 1;


};