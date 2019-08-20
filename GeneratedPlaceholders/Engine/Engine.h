#pragma once

#include "CoreMinimal.h"
#include "Engine.generated.h"

UCLASS()
class UEngine : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFont* TinyFont;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath TinyFontName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFont* SmallFont;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath SmallFontName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFont* MediumFont;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath MediumFontName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFont* LargeFont;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath LargeFontName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UFont* SubtitleFont;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath SubtitleFontName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<class UFont*> AdditionalFonts;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> AdditionalFontNames;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* ConsoleClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath ConsoleClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GameViewportClientClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GameViewportClientClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* LocalPlayerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath LocalPlayerClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* WorldSettingsClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath WorldSettingsClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath NavigationSystemClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* NavigationSystemClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath NavigationSystemConfigClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath AvoidanceManagerClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* AvoidanceManagerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* PhysicsCollisionHandlerClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath PhysicsCollisionHandlerClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GameUserSettingsClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* GameUserSettingsClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath AIControllerClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameUserSettings* GameUserSettings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass* LevelScriptActorClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath LevelScriptActorClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath DefaultBlueprintBaseClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath GameSingletonClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UObject* GameSingleton;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath AssetManagerClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UAssetManager* AssetManager;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture* DefaultDiffuseTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultDiffuseTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultBSPVertexTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultBSPVertexTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* HighFrequencyNoiseTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath HighFrequencyNoiseTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultBokehTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultBokehTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* DefaultBloomKernelTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultBloomKernelTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* WireframeMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString WireframeMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* DebugMeshMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DebugMeshMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* LevelColorationLitMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LevelColorationLitMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* LevelColorationUnlitMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LevelColorationUnlitMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* LightingTexelDensityMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString LightingTexelDensityName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* ShadedLevelColorationLitMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ShadedLevelColorationLitMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* ShadedLevelColorationUnlitMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ShadedLevelColorationUnlitMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* RemoveSurfaceMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath RemoveSurfaceMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* VertexColorMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString VertexColorMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* VertexColorViewModeMaterial_ColorOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString VertexColorViewModeMaterialName_ColorOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* VertexColorViewModeMaterial_AlphaAsColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString VertexColorViewModeMaterialName_AlphaAsColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* VertexColorViewModeMaterial_RedOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString VertexColorViewModeMaterialName_RedOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* VertexColorViewModeMaterial_GreenOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString VertexColorViewModeMaterialName_GreenOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* VertexColorViewModeMaterial_BlueOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString VertexColorViewModeMaterialName_BlueOnly;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DebugEditorMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* ConstraintLimitMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ConstraintLimitMaterialX;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ConstraintLimitMaterialY;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ConstraintLimitMaterialZ;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* InvalidLightmapSettingsMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath InvalidLightmapSettingsMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* PreviewShadowsIndicatorMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath PreviewShadowsIndicatorMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMaterial* ArrowMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath ArrowMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LightingOnlyBrightness;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> ShaderComplexityColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> QuadComplexityColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> LightComplexityColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> StationaryLightOverlapColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> LODColorationColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> HLODColorationColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FLinearColor> StreamingAccuracyColors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxPixelShaderAdditiveComplexityCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxES2PixelShaderAdditiveComplexityCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxES3PixelShaderAdditiveComplexityCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinLightMapDensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float IdealLightMapDensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxLightMapDensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bRenderLightMapDensityGrayscale : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RenderLightMapDensityGrayscaleScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float RenderLightMapDensityColorScale;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LightMapDensityVertexMappedColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor LightMapDensitySelectedColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FStatColorMapping> StatColorMappings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UPhysicalMaterial* DefaultPhysMaterial;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath DefaultPhysMaterialName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FGameNameRedirect> ActiveGameNameRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FClassRedirect> ActiveClassRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FPluginRedirect> ActivePluginRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FStructRedirect> ActiveStructRedirects;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* PreIntegratedSkinBRDFTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath PreIntegratedSkinBRDFTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* MiniFontTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath MiniFontTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture* WeightMapPlaceholderTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath WeightMapPlaceholderTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTexture2D* LightMapDensityTexture;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftObjectPath LightMapDensityTextureName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UGameViewportClient* GameViewport;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> DeferredCommands;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int TickCycles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int GameCycles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ClientCycles;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NearClipPlane;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bHardwareSurveyEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSubtitlesEnabled : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSubtitlesForcedOff : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaximumLoopIterationCount;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCanBlueprintsTickByDefault : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bOptimizeAnimBlueprintMemberVariableAccess : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowMultiThreadedAnimationUpdate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableEditorPSysRealtimeLOD : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char UnknownData06 : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSmoothFrameRate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bUseFixedFrameRate : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float FixedFrameRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFloatRange SmoothedFrameRateRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UEngineCustomTimeStep* CustomTimeStep;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath CustomTimeStepClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UTimecodeProvider* TimecodeProvider;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FSoftClassPath TimecodeFrameRateClassName;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FFrameRate DefaultTimecodeFrameRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bCheckForMultiplePawnsSpawnedInAFrame : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NumPawnsAllowedToBeSpawnedInAFrame;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bShouldGenerateLowQualityLightmaps : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_WorldBox;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_BrushWire;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_AddWire;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_SubtractWire;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_SemiSolidWire;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_NonSolidWire;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_WireBackground;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_ScaleBoxHi;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_VolumeCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_BSPCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_OrthoBackground;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_Volume;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FColor C_BrushShape;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StreamingDistanceFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FDirectoryPath GameScreenshotSaveDirectory;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<ETransitionType> TransitionType;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TransitionDescription;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString TransitionGameMode;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MeshLODRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bAllowMatureLanguage : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraRotationThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float CameraTranslationThreshold;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float PrimitiveProbablyVisibleTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MaxOcclusionPixelsFraction;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bPauseOnLossOfFocus : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxParticleResize;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int MaxParticleResizeWarn;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FDropNoteInfo> PendingDroppedNotes;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float NetClientTicksPerSecond;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float DisplayGamma;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float MinDesiredFrameRate;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor DefaultSelectedMaterialColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor SelectedMaterialColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor SelectionOutlineColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor SubduedSelectionOutlineColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FLinearColor SelectedMaterialColorOverride;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool bIsOverridingSelectedColor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableOnScreenDebugMessages : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bEnableOnScreenDebugMessagesDisplay : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bSuppressMapWarnings : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bDisableAILogging : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint32_t bEnableVisualLogRecordingOnStart;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int ScreenSaverInhibitorSemaphore;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bLockReadOnlyLevels : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FString ParticleEventManagerClassPath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SelectionHighlightIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SelectionMeshSectionHighlightIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float BSPSelectionHighlightIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float HoverHighlightIntensity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float SelectionHighlightIntensityBillboards;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FNetDriverDefinition> NetDriverDefinitions;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> ServerActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<struct FString> RuntimeServerActors;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	unsigned char bStartedLoadMapMovie : 1;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int NextWorldContextHandle;


};